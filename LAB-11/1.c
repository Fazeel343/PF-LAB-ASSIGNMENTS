#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "player_data.dat"
#define MAX_PLAYERS 5

// Struct definitions
struct player {
    char name[20];
    char team[20];
};

struct bowl {
    char type[10]; // seemer, pacer, spinner, or N/A
    char arm[5];   // left or right
    struct player ply;
};

struct bat {
    char type[10];   // top order, middle order, lower order
    char handed[8];  // lefty or righty
    struct bowl ply2;
};

// Function prototypes
void createPlayer();
void readPlayers();
void updatePlayer(char *name);
void deletePlayer(char *name);
void debugDumpFile();

int main() {
    int choice;
    char playerName[20];

    while (1) {
        printf("\n--- Player Management System ---\n");
        printf("1. Add Player\n");
        printf("2. View All Players\n");
        printf("3. Update Player\n");
        printf("4. Delete Player\n");
        printf("5. Debug File Contents\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createPlayer();
                break;
            case 2:
                readPlayers();
                break;
            case 3:
                printf("Enter the name of the player to update: ");
                scanf(" %19[^\n]", playerName);
                updatePlayer(playerName);
                break;
            case 4:
                printf("Enter the name of the player to delete: ");
                scanf(" %19[^\n]", playerName);
                deletePlayer(playerName);
                break;
            case 5:
                debugDumpFile();
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to add a new player
void createPlayer() {
    struct bat newPlayer = {0};
    FILE *file = fopen(FILE_NAME, "ab");
    if (!file) {
        perror("Error opening file");
        return;
    }

    printf("Enter player name: ");
    scanf(" %19[^\n]", newPlayer.ply2.ply.name);
    printf("Enter player team: ");
    scanf(" %19[^\n]", newPlayer.ply2.ply.team);
    printf("Enter bowler type (seemer/pacer/spinner or N/A): ");
    scanf(" %9[^\n]", newPlayer.ply2.type);
    printf("Enter bowler arm (left/right): ");
    scanf(" %4[^\n]", newPlayer.ply2.arm);
    printf("Enter batsman type (top/middle/lower order): ");
    scanf(" %9[^\n]", newPlayer.type);
    printf("Enter batting handedness (lefty/righty): ");
    scanf(" %7[^\n]", newPlayer.handed);

    fwrite(&newPlayer, sizeof(struct bat), 1, file);
    fclose(file);

    printf("Player added successfully!\n");
}

// Function to read and display all players
void readPlayers() {
    struct bat player;
    FILE *file = fopen(FILE_NAME, "rb");
    if (!file) {
        perror("Error opening file");
        return;
    }

    printf("\n--- Player Details ---\n");
    while (fread(&player, sizeof(struct bat), 1, file)) {
        printf("Name: %s\n", player.ply2.ply.name);
        printf("Team: %s\n", player.ply2.ply.team);
        printf("Bowler Type: %s\n", player.ply2.type);
        printf("Bowler Arm: %s\n", player.ply2.arm);
        printf("Batsman Type: %s\n", player.type);
        printf("Batting Handedness: %s\n", player.handed);
        printf("-----------------------------\n");
    }

    fclose(file);
}

// Function to update a player's details
void updatePlayer(char *name) {
    struct bat player;
    int found = 0;
    FILE *file = fopen(FILE_NAME, "rb+");
    if (!file) {
        perror("Error opening file");
        return;
    }

    while (fread(&player, sizeof(struct bat), 1, file)) {
        if (strcmp(player.ply2.ply.name, name) == 0) {
            found = 1;
            fseek(file, -sizeof(struct bat), SEEK_CUR);

            printf("Enter new team: ");
            scanf(" %19[^\n]", player.ply2.ply.team);
            printf("Enter new bowler type: ");
            scanf(" %9[^\n]", player.ply2.type);
            printf("Enter new bowler arm: ");
            scanf(" %4[^\n]", player.ply2.arm);
            printf("Enter new batsman type: ");
            scanf(" %9[^\n]", player.type);
            printf("Enter new batting handedness: ");
            scanf(" %7[^\n]", player.handed);

            fwrite(&player, sizeof(struct bat), 1, file);
            printf("Player updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Player not found!\n");
    }

    fclose(file);
}

// Function to delete a player
void deletePlayer(char *name) {
    struct bat player;
    int found = 0;
    FILE *file = fopen(FILE_NAME, "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if (!file || !temp) {
        perror("Error opening file");
        return;
    }

    while (fread(&player, sizeof(struct bat), 1, file)) {
        if (strcmp(player.ply2.ply.name, name) == 0) {
            found = 1;
            printf("Deleted player: %s\n", player.ply2.ply.name);
            continue; // Skip writing this record to the temp file
        }
        fwrite(&player, sizeof(struct bat), 1, temp);
    }

    fclose(file);
    fclose(temp);

    remove(FILE_NAME);
    rename("temp.dat", FILE_NAME);

    if (!found) {
        printf("Player not found!\n");
    }
}

// Function to debug file contents
void debugDumpFile() {
    struct bat player;
    FILE *file = fopen(FILE_NAME, "rb");
    if (!file) {
        perror("Error opening file");
        return;
    }

    printf("\n--- Debug Dump of Player Data ---\n");
    while (fread(&player, sizeof(struct bat), 1, file)) {
        printf("Name: '%s'\n", player.ply2.ply.name);
        printf("Team: '%s'\n", player.ply2.ply.team);
        printf("-----------------------------\n");
    }
    fclose(file);
}
