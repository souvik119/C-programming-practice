#include<stdio.h>

int main(void){

    int num, exp;
    int value = 1;
    printf("Enter the number \n");
    scanf(" %d", &num);
    printf("Enter exponent\n");
    scanf(" %d", &exp);
    while(exp != 0){
        value *= num;
        exp--;
    }
    printf("Result is : %d", value);
    return 0;
}