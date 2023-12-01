#include <stdio.h>

int main(){
int choice;
int a;
int b;
int c;
int result;
int result1, result2, result3;
float result4;
printf(" Choose Operation:\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
scanf("%d", &choice);
 switch (choice)
 {
    case 1:
    printf("Enter Number:");
    scanf("%d %d", &a, &b);
    result1 = a + b;
    printf("result: %d", result1);
    break;
    case 2:
    printf("Enter Number:");
    scanf("%d %d", &a, &b);
    result2 = a - b;
    printf("result: %d", result2);
    break;
    case 3:
    printf("Enter Number:");
    scanf("%d %d", &a, &b);
    result3 = a * b;
    printf("result: %d", result3);
    break;
    case 4:
    printf("Enter Number:");
    scanf("%d %d", &a, &b);
    result4 = a / b;
    printf("result: %f2", result4);
    break;
 }

return 0;
}
