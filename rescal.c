#include <stdio.h>
#include <math.h>
int d1,d2,d3;
int multiplier;
int result, result_1;
int main(){
printf("Input Bands: ");
scanf("%d %d %d", &d1, &d2, &d3);
printf("Decoded Values: ");
char * d1(int num){
    switch(num){
        case 0:
        return "Black";
        case 1:
        return "Brown";
        case 2:
        return "Red";
        case 3:
        return "Orange";
        case 4:
        return "Yellow";
        case 5:
        return "Green";
    }
int d3(int num){
    switch (num){
case 0:
    return 1;
case 1:
    return 10;
case 2:
    return 100;
case 3:
    return 1000;
case 4:
    return 10000;
case 5:
    return 100000;
default:
    printf("Invalid Output ");
    }
}
printf("\nResistance value is %d ohms", result_1);


return 0;
}
