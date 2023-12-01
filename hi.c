#include <stdio.h>

int main(){

int balance = 1000;
int choice_1, choice_2;
int selection;
int result;
int result_1;
label:
    printf("Banking System by Jevan\n 1.Deposit Money\n 2.Withdraw Money\n 3.Check Balance\n 4.Exit\n");
    scanf("%d",&selection);
switch (selection)
{
case 1:
    printf("How much MONEY would you like to deposit?:\n");
    scanf("%d", &choice_1);
    printf("You deposited %d\n", choice_1);
    result = choice_1 + balance;
    printf("You have %d pesos in your account...\n\n\n", result);
    break;
case 2:
    printf("How much MONEY would you like to withdraw?:\n");
    scanf("%d", &choice_2);
    printf("You withdrew %d\n", choice_2);
    result_1 = balance - choice_2;
    printf("You have %d pesos in your account...\n\n\n", result_1);
    break;
case 3:
    printf("Your balance is %d\n\n\n", balance);
    goto label;

case 4:
    printf("Goodbye :>");
    break;
}
return 0;
}
