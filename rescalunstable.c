#include <stdio.h>
#include <math.h>
int main(){
int num1, num2, num3;
printf("Input Bands: ");
scanf("%d %d %d", &num1, &num2, &num3);
if (num1 >=0 && num1 <=5) {
       if (num2 >=0 && num2 <=5) {
printf("Decoded Values: ");

    switch (num1)
    {
    case 0:
        printf("black ");
        break;
    case 1:
        printf("brown ");
        break;
    case 2:
        printf("red ");
        break;
    case 3:
        printf("orange ");
        break;
    case 4:
        printf("yellow ");
        break;
    case 5:
        printf("green ");
        break;

    }

       switch (num2)
    {
    case 0:
        printf("black ");
        break;
    case 1:
        printf("brown ");
        break;
    case 2:
        printf("red ");
        break;
    case 3:
        printf("orange ");
        break;
    case 4:
        printf("yellow ");
        break;
    case 5:
        printf("green ");
        break;
    }

    switch (num3)
        {
    case 0:
        printf("1");
        num3 = 0 + 1;
        break;

    case 1:
        printf("10");
        num3 = 1 + 9;
        break;

    case 2:
        printf("100");
        num3 = 2 + 98;
        break;

    case 3:
        printf("1000");
        num3 = 3 + 997;
        break;

    case 4:
        printf("10000");
        num3 = 4 + 9996;
        break;

    case 5:
        printf("100000");
        num3 = 5 + 99995;
        break;
    }
int result, resval;
result = (num1*10)+num2;
resval = result* num3;
printf("\nThe resistance value is %d ohms", resval);
    }
    else
        printf("Invalid Input");
    }
    else
        printf("Invalid Input");
return 0;
}

