#include<stdio.h>

int main(void){
    int a, b;
    int *ptra, *ptrb;
    int temp;

    printf("Enter value for a : \n");
    scanf("%d", &a);

    printf("Enter value for b : \n");
    scanf("%d", &b);

    printf("Initial values are a = %d and b = %d\n", a, b);
    ptra = &a;
    ptrb = &b;

    temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;

    printf("Values after swapping a = %d and b = %d\n", a, b);
    return 0;
}