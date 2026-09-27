//ATM SIMULATOR
#include <stdio.h>

int main()
{
    int pin;
    int correctPin = 1234;
    int choice;
    int amount;
    int balance = 5000;
    int attempts = 0;

    printf("===== ATM MACHINE =====\n");

    while(attempts < 3)
    {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if(pin == correctPin)
        {
            printf("PIN correct! Login successful.\n");
            break;
        }
        else
        {
            attempts++;
            printf("Incorrect PIN!\n");
        }
    }

    if(attempts == 3)
    {
        printf("Too many incorrect attempts. Account locked!\n");
        return 0;
    }

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Current Balance = Rs.%d\n", balance);
        }
        else if(choice == 2)
        {
            printf("Enter deposit amount: ");
            scanf("%d", &amount);

            if(amount > 0)
            {
                balance = balance + amount;
                printf("Deposit successful!\n");
                printf("New Balance = Rs.%d\n", balance);
            }
            else
            {
                printf("Invalid amount!\n");
            }
        }
        else if(choice == 3)
        {
            printf("Enter withdrawal amount: ");
            scanf("%d", &amount);

            if(amount <= 0)
            {
                printf("Invalid amount!\n");
            }
            else if(amount > balance)
            {
                printf("Insufficient balance!\n");
            }
            else
            {
                balance = balance - amount;
                printf("Withdrawal successful!\n");
                printf("Remaining Balance = Rs.%d\n", balance);
            }
        }
        else if(choice == 4)
        {
            printf("Thank you for using the ATM!\n");
        }
        else
        {
            printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}