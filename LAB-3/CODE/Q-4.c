#include <stdio.h>
int main() {
    int dist = 1207, fuelPrice1 = 118, fuelPrice2 = 123, average, fuelConsumed1Way, totalFuelConsumed,
     totalCost, cost_forward, cost_return;
    printf("Enter vehicle's fuel average:");
    scanf("%d", &average);
    if (average <= 0) {
        printf("Fuel average should be positive. Enter again.");
    }

    fuelConsumed1Way = dist / average;
    cost_forward = fuelConsumed1Way * fuelPrice1;
    cost_return = fuelConsumed1Way * fuelPrice2;
    totalFuelConsumed = 2 * fuelConsumed1Way;
    totalCost = cost_forward + cost_return;

    printf("Total Fuel Cost = %d \nTotal Fuel Consumed = %d", totalCost, totalFuelConsumed);
}