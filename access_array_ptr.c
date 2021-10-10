#include<stdio.h>

int main(void){
    int arr[5] = {10, 20, 30, 40, 50};
    int i, *ptr;
    ptr = arr; //store address of 1st arr element in ptr
    for(i=0; i<5; i++){
        printf("Address of arr[%d] is : %x\n", i, ptr);
        printf("Value of arr[%d] is : %d\n", i, *ptr);
        ptr++; //move pointer to next location
    }
    return 0;
}