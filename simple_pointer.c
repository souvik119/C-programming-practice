#include<stdio.h>

int main(void){
    int var = 12; //actual variable declaration
    int *p; //pointer p which points to an int

    p = &var; //storing address of var variable to pointer p
    printf("Address of var variable is : %x\n", &var); //%x used for hex values

    printf("Address stored in pointer variable is : %x\n", p);
    printf("Value of variable that p points to is : %d\n", *p);
    return 0;
}