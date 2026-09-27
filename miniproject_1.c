// RESTAURANT BILLING SYSTEM
#include <stdio.h>

int main()
{
    int choice, quantity;
    int total = 0;

    do
    {
        printf("\n===== RESTAURANT MENU =====\n");
        printf("1. Burger  - Rs.120\n");
        printf("2. Pizza   - Rs.200\n");
        printf("3. Coke    - Rs.50\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            total = total + (120 * quantity);
            printf("Burger added!\n");
        }
        else if(choice == 2)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            total = total + (200 * quantity);
            printf("Pizza added!\n");
        }
        else if(choice == 3)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            total = total + (50 * quantity);
            printf("Coke added!\n");
        }
        else if(choice == 4)
        {
            printf("\nGenerating bill...\n");
        }
        else
        {
            printf("Invalid choice!\n");
        }

    } while(choice != 4);

    printf("\n===== FINAL BILL =====\n");
    printf("Total Amount = Rs.%d\n", total);
    printf("Thank you! Visit again.\n");

    return 0;
}