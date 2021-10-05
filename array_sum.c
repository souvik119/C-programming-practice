#include<stdio.h>

void printArray(int arr[], int len){
    int i;
    for(i=0; i<len; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main(void){
    int i, len, arr[100], sum = 0;
    printf("Enter the number of elements in the list\n");
    scanf(" %d", &len);
    printf("Enter the numbers\n");
    for(i=0; i<len; i++){
        scanf(" %d", &arr[i]);
        sum += arr[i];
    }
    printf("List looks like this : ");
    printArray(arr, len);
    printf("Sum of numbers in the list is : %d\n", sum);
    return 0;
}