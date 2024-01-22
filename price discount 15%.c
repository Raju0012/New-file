//Enter the a price of an item and calculate net amount after 15% dicount//
#include <stdio.h>

int main() {
    float price, discount, netAmount;

    printf("Enter the price of the item: ");
    scanf("%f", &price);

    discount = 0.15 * price;
    netAmount = price - discount; 

    printf("The net amount after a 15%% discount is: %.2f\n", netAmount);

    return 0;
}

