#include<stdio.h>

int main(void){
    int *ptrA, *ptrB;

    ptrA = (int *)1; //memory location of the integer
    ptrB = (int *)2;

    printf("Value of ptrA is %d\n", ptrA);
    printf("Value of ptrB is %d\n", ptrB);

    if(ptrB > ptrA){
        printf("B is greater than A\n");
    }
    return 0;
}