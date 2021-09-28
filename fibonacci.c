#include<stdio.h>

void fibonacci(int num);

int main(void){
    int num = 0;
    printf("Enter number of terms\n");
    scanf(" %d", &num);
    fibonacci(num);
    return 0;
}

void fibonacci(int num){
    int a = 0, b = 1, c; //aa and b are first 2 terms c is the intial sum of a and b
    int i = 3; // starting from 3 since a, b are already there
    if(num == 1){
        printf("%d\t", a);
    }
    if(num >= 2){
        printf("%d\t%d\t", a, b);
    }
    while(i <= num){
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
        i++;
    }
}