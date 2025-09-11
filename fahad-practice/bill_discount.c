#include <stdio.h>

int main() {
    char itemName[50];
    int quantity;
    double pricePerItem, total;

    printf("Dish Name: ");
    scanf("%s", itemName);

    printf("Quantity: ");
    scanf("%d", &quantity);

    printf("Price per item (PKR): ");
    scanf("%lf", &pricePerItem);

    total = quantity * pricePerItem;

    printf("\n--- Food Bill ---\n");
    printf("Item: %s\n", itemName);
    printf("Quantity: %d\n", quantity);
    printf("Price per Item: %.2f PKR\n", pricePerItem);
    printf("Subtotal: %.2f PKR\n", total);

    if (total > 2000) {
        double discount = total * 0.15;
        total -= discount;
        printf("Discount Applied (15%%): -%.2f PKR\n", discount);
    } else {
        printf("No Discount Applied.\n");
    }

    printf("Final Total: %.2f PKR\n", total);

    return 0;
}
