#include<stdio.h>

void printArray(int arr[], int len){
    int i;
    for(i=0; i<len; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int deleteElement(int arr[], int len, int num){
    int i;
    int index = -1; //setting negative index if num not found
    for(i=0; i<len; i++){
        if(arr[i] == num){
            index = i;
            break;
        }
    }
    if(index != -1){
        //shift al elements from end of array to index i 1 element to the left
        for(i=index; i<len; i++){
            arr[i] = arr[i+1];
        }
    }
    return index;
}

int main(void){
    int arr[] = {1, 20, 51, 78, 30};
    int i, num, index; //setting index to -1 if num not found
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Original list\n");
    printArray(arr, len);
    printf("Enter element to delete\n");
    scanf(" %d",&num);
    index = deleteElement(arr, len, num);
    if(index != -1){
        printf("Modified list\n");
        printArray(arr, len-1);
    }
    else{
        printf("Element not found\n");
    }
    return 0;
}