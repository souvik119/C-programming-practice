#include<stdio.h>

int main(void){
    int fact, i, n; //fact for string result, i for iteration, n for number entered
    fact = 1; //initializing to 1
    printf("Enter number to find factorial : \n");
    scanf(" %d", &n);
    for(i=1; i<=n; i++){
        fact *= i;
    }
    printf("Fcatorial of %d is %d", n, fact);
    return 0;
}