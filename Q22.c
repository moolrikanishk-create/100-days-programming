//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {


    float costPrice, sellingPrice;
    costPrice = 0.0;
    sellingPrice = 0.0;

    float difference, percentage;
    difference = 0.0;
    percentage = 0.0;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        difference = sellingPrice - costPrice;
        percentage = (difference / costPrice) * 100;
        printf("Profit = %.2f\n", difference);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        difference = costPrice - sellingPrice;
        percentage = (difference / costPrice) * 100;
        printf("Loss = %.2f\n", difference);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
