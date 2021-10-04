#include<stdio.h>

void printArray(int arr[], int len){
    int i;
    for(i=0; i<len; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int findSamllest(int arr[], int len){
    int i, small = arr[0]; //initlialize to first element
    for(i=0; i<len; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    return small;
}

int findLargest(int arr[], int len){
    int i, big = arr[0]; //initlialize to first element
    for(i=0; i<len; i++){
        if(arr[i] > big){
            big = arr[i];
        }
    }
    return big;
}

int main(void){
    int arr[] = {1, 20, 51, 78, 30};
    int len = sizeof(arr) / sizeof(arr[0]);
    int small, big;
    printf("List is: \n");
    printArray(arr, len);
    small = findSamllest(arr, len);
    big = findLargest(arr, len);
    printf("Samllest number is : %d and largest number is : %d\n", small, big);
    return 0;
}