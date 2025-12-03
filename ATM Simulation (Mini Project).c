#include <stdio.h>

int main() {
    int pin = 1234; // preset PIN
    int enteredPin;
    int choice;
    float balance = 1000.0, amount;

    printf("=== Welcome to ATM Simulation ===\n");

    // PIN check
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    if(enteredPin != pin) {
        printf("Incorrect PIN! Exiting...\n");
        return 0;
    }

    while(1) {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your current balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful! New balance: %.2f\n", balance);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount > balance)
                    printf("Insufficient balance!\n");
                else {
                    balance -= amount;
                    printf("Withdrawal successful! Remaining balance: %.2f\n", balance);
                }
                break;

            case 4:
                printf("Exiting ATM. Thank you!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
