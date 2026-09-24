//  ATM Transaction System • Create a menu-driven program to check balance, deposit money, withdraw money, and exit. • Prevent a withdrawal when the balance is insufficient. • Maintain and display the last five transactions.
#include <stdio.h>
int main()
{
    float balance = 10000;
    float amount;
    int choice;
    float transaction[5];
    int count = 0, i;
    do
    {
        printf("\n1.Check Balance");
        printf("\n2.Deposit");
        printf("\n3.Withdraw");
        printf("\n4.Last Five Transactions");
        printf("\n5.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Balance = %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);
                balance += amount;
                if(count < 5)
                    transaction[count++] = amount;
                printf("Deposit Successful\n");
                break;
            case 3:
                printf("Enter amount: ");
                scanf("%f", &amount);
                if(amount <= balance)
                {
                    balance -= amount;
                    if(count < 5)
                        transaction[count++] = -amount;
                    printf("Withdrawal Successful\n");
                }
                else
                {
                    printf("Insufficient Balance\n");
                }
                break;
            case 4:
                printf("\nLast Transactions:\n");
                for(i = 0; i < count; i++)
                {
                    if(transaction[i] > 0)
                        printf("Deposited: %.2f\n", transaction[i]);
                    else
                        printf("Withdrawn: %.2f\n", -transaction[i]);
                }
                break;
        }
    } while(choice != 5);
    return 0;
}