#include<stdio.h>

int main(void){
    char str1[100], str2[100];
    printf("Enter first String: \n");
    gets(str1); //accepts spaces as well
    printf("Enter second String: \n");
    gets(str2);

    //assigning base address of str1 to pointer a and base address of str2 to for ptr b
    char *a = str1;
    char *b = str2;

    //move pointer a to end of str1
    while(*a){ //till a does not point to Null
        a++;
    }

    while(*b){
        *a = *b; //adding str2 at end of str1
        b++;
        a++;
    }

    *a = '\0'; //all strings must end with \0
    printf("String after concatenation is : %s", str1);
    return 0;
}