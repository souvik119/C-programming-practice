#include<stdio.h>

int main(void){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr[5]; //an array of int pointers
    int i;
    for(i=0; i<5; i++){
        ptr[i] = &arr[i]; //assign address of each array element to ptr
    }
    printf("Address of each array element\n");
    for(i=0; i<5; i++){
        printf("%x\t", ptr[i]);
    }

    printf("\nValue of each array element\n");
    for(i=0; i<5; i++){
        printf("%d\t", *ptr[i]);
    }
    return 0;
}