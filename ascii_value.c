#include<stdio.h>

int main(void){
    char c;
    printf("Enter a character : \n");
    scanf(" %c", &c);
    //ascii value is just the int value of the char
    printf("ASCII value of %c is %d", c, c);
    return 0;
}