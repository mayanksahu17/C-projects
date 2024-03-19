#include <stdio.h>

void handleElectronics(float price, float discount) {
    float totalPrice;
    int option;

    printf("Enter the price of the electronics product: ");
    scanf("%f", &price);
    totalPrice = price - (price * discount);
    printf("Total price after discount: $%.2f\n", totalPrice);

    printf("Additional options for Electronics:\n");
    printf("1. Warranty\n");
    printf("2. Accessories\n");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Warranty added. Total price with warranty: $%.2f\n", totalPrice + 50.0);
            break;
        case 2:
            printf("Accessories added. Total price with accessories: $%.2f\n", totalPrice + 20.0);
            break;
        default:
            printf("Invalid option!\n");
            break;
    }
}

void handleProduct(int productType, float discount) {
    float price;

    switch (productType) {
        case 1:
            handleElectronics(price, discount);
            break;
        case 2:
            printf("Enter the price of the clothing item: ");
            scanf("%f", &price);
            printf("Total price after discount: $%.2f\n", price - (price * discount));
            break;
        case 3:
            printf("Enter the price of the book: ");
            scanf("%f", &price);
            printf("Total price after discount: $%.2f\n", price - (price * discount));
            break;
        default:
            printf("Invalid product type!\n");
            break;
    }
}

int main() {
    int customerType, productType;
    float discount;

    printf("Welcome to our store!\n");

    printf("Please select the customer type:\n");
    printf("1. Regular Customer\n");
    printf("2. Premium Customer\n");
    scanf("%d", &customerType);

    switch (customerType) {
        case 1:
            discount = 0.1; // Regular customer gets a 10% discount
            break;
        case 2:
            discount = 0.2; // Premium customer gets a 20% discount
            break;
        default:
            printf("Invalid customer type!\n");
            return 0;
    }

    printf("Please select the product type:\n");
    printf("1. Electronics\n");
    printf("2. Clothing\n");
    printf("3. Books\n");
    scanf("%d", &productType);

    handleProduct(productType, discount);

    printf("Thank you for shopping with us!\n");

    return 0;
}
