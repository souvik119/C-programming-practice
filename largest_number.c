#include<stdio.h>


int main(void){
    int numberOfNumbers, i, largest, num;
    printf("Enter number of numbers you want to enter: \n");
    scanf(" %d", &numberOfNumbers);

    printf("Enter numbers : \n");
    scanf(" %d", &largest); //assuming first number is the largest

    for(i=2; i<=numberOfNumbers; i++){
        scanf(" %d", &num);
        if(largest < num){
            largest = num;
        }
    }
    printf("Largest number is : %d\n", largest);
    return 0;
}