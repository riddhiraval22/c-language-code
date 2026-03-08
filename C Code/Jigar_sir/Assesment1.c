#include <stdio.h>
#include<conio.h>>
int main() {
    int choice, qty;
    char more;
    int amount = 0, total = 0;
    // Loop runs until user stops ordering
    do {
        // Display Menu
        printf("\n----- MENU -----\n");
        printf("1. Pizza  - Rs 180/pcs\n");
        printf("2. Burger - Rs 100/pcs\n");
        printf("3. Dosa   - Rs 120/pcs\n");
        printf("4. Idli   - Rs 50/pcs\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        // Switch for item selection
        switch (choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                amount = 180 * qty;
                break;
            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                amount = 100 * qty;
                break;
            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                amount = 120 * qty;
                break;
            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                amount = 50 * qty;
                break;
            default:
                printf("Invalid choice! Please select again.\n");
                continue;   // Skip rest of loop and restart
        }
        // Print amount of current item
        printf("Amount: %d\n", amount);
        // Add to total
        total += amount;
        printf("Total Amount is = %d\n", total);
        // Ask for more orders
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &more);
    } while (more == 'y' || more == 'Y');
    // Final Bill
    printf("\n----- FINAL BILL -----\n");
    printf("Your Total Amount: %d\n", total);
    printf("Thank you! Visit again.\n");
    return 0;
}
