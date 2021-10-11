#include<stdio.h>

int main(void){
    int var = 50;
    int *ptr; //pointer to var
    int **pptr; //pointer to ptr

    ptr = &var;
    pptr = &ptr;

    printf("Value of var = %d\n", var);
    printf("Value available at *ptr = %d\n", *ptr);
    printf("Value available at **pptr = %d\n", **pptr);
    return 0;
}