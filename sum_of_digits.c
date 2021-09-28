#include<stdio.h>

int main(void){
    int number, sum = 0, saved_number, remainder;
    printf("Enter a number:\n");
    scanf(" %d", &number);
    saved_number = number;
    while(number > 0){
        remainder = number % 10;
        sum += remainder;
        number = number / 10;
    }
    printf("Sum of digits of %d is %d", saved_number, sum);
    return 0;
}