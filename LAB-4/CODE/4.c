#include <stdio.h>
int main() {
    int itemsCost, discount, discountedCost, savedCost;
    printf("Enter Total Cost Of Items: ");
    scanf("%d", &itemsCost);
    if (itemsCost < 500) {
        printf("NO DISCOUNT!");
        printf("\nYour Total Cost:%d", itemsCost);
    }
    else if (itemsCost < 2000) {
        discount =  itemsCost * 0.05;
        discountedCost = itemsCost - discount;
        printf("YOU AVAILED THE DISCOUNT!");
        printf("\nYour Total Cost: %d", itemsCost);
        printf("\nDiscount: %d", discount);
        printf("\nTotal Cost After Discount: %d", discountedCost);
    } 
    else if (itemsCost >= 2000 || itemsCost <= 4000) {
        discount =  itemsCost * 0.1;
        discountedCost = itemsCost - discount;
        printf("YOU AVAILED THE DISCOUNT!");
        printf("\nYour Total Cost: %d", itemsCost);
        printf("\nDiscount: %d", discount);
        printf("\nTotal Cost After Discount: %d", discountedCost);
    } 
    else if (itemsCost > 4000 || itemsCost <= 6000) {
        discount =  itemsCost * 0.2;
        discountedCost = itemsCost - discount;
        printf("YOU AVAILED THE DISCOUNT!");
        printf("\nYour Total Cost: %d", itemsCost);
        printf("\nDiscount: %d", discount);
        printf("\nTotal Cost After Discount: %d", discountedCost);
    } 
     else if (itemsCost > 6000) {
        discount =  itemsCost * 0.35;
        discountedCost = itemsCost - discount;
        printf("YOU AVAILED THE DISCOUNT!");
        printf("\nYour Total Cost: %d", itemsCost);
        printf("\nDiscount: %d", discount);
        printf("\nTotal Cost After Discount: %d", discountedCost);
    } 
    return 0;

}