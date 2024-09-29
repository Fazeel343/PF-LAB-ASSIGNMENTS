#include <stdio.h>
void main() {
    char original_ch, encrypted_ch, decrypted_ch, key;
    printf("Enter a character to encrypt: ");
    scanf(" %c", &original_ch);
    printf("Enter a key for encryption: ");
    scanf(" %c", &key);
    encrypted_ch = original_ch ^ key;
    decrypted_ch = encrypted_ch ^ key;
    printf("\nOriginal character: %c", original_ch);
    printf("\nEncrypted character: %c (ASCII: %d)", encrypted_ch, encrypted_ch);
    printf("\nDecrypted character: %c", decrypted_ch);
}