#include <stdio.h>

struct Account
{
    int accountNumber;
    float balance;
    char name[50];
    int pin;
};
struct Account acc;

void createAccount(){
printf("Enter Account number: ");
scanf("%d",&acc.accountNumber);
printf("Enter name: ");
scanf("%s", &acc.name);
printf("Enter pin number: ");
scanf("%d",&acc.pin);
acc.balance = 0;
printf("Account created successfully.\n");
};

void checkBalance(){
int pin;
printf("Enter pin number: ");
scanf("%d",&pin);
if(pin == acc.pin){
    printf("Account Number: %d\nName: %s\nBalance: %.2f\n", acc.accountNumber, acc.name, acc.balance);
    } else {
    printf("Incorrect PIN!\n");
    }
};
void withdraw(){
int pin;
float amount;
printf("Enter pin number: ");
scanf("%d", &pin);
 if (pin == acc.pin) {
        printf("Enter Withdrawal Amount: ");
        scanf("%f", &amount);
        if (amount <= acc.balance) {
            acc.balance -= amount;
            printf("Withdrawn! New Balance: %.2f\n", acc.balance);
        } else {
            printf("Insufficient Balance!\n");
        }
    } else {
        printf("Incorrect PIN!\n");
    }
};
void deposit(){
float amount;
printf("Enter deposit amount: ");
scanf("%f",&amount);
acc.balance += amount;
printf("Deposited new balance: %.2f\n",acc.balance);

};


int main()
{
    int choice;
    do {
        printf("\n1. Create Account\n2. Deposit Money\n3. Withdraw Money\n4. View Account\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}
