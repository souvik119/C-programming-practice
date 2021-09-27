#include<stdio.h>

int a, b; //global variables a and b

int main(void){
    printf("Enter first value\n");
    scanf(" %d", &a);
    printf("Enter second value\n");
    scanf(" %d", &b);

    if(a == b){
        printf("Both values are equal\n");
    }else if(a < b){
        printf("The larger number is %03d\n", b); //03d means represent as 3 digit no with leading 0s
        printf("The smaller number is %03d\n", a);
    }else{
        printf("The larger number is %03d\n", a);
        printf("The smaller number is %03d\n", b);
    }   
    return 0;
}