#include<stdio.h>

void printArray(int arr[], int len){
    int i;
    for(i=0; i<len; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int start, int end){
    int temp; //to help swap the indexes
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(void){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]); //used to find length of array
    printArray(arr, len); //print original array
    reverseArray(arr, 0, len-1);
    printf("Reversed array is : \n");
    printArray(arr, len);
    return 0;
}