#include<stdio.h>

void printArray(int arr[], int len){
    int i;
    for(i=0; i<len; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void insertElement(int * arr, int len, int val, int pos){
    int i;
    len++; //creating extra index for new element
    for(i=len-1; i>=pos; i--){
        arr[i] = arr[i-1]; //shifting elements to the right
    }
    arr[pos-1] = val;
}

int main(void){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]); //used to find length of array
    int val, pos;
    printArray(arr, len); //print original array
    printf("Enter element to be inserted\n");
    scanf(" %d", &val);
    printf("Enter which position is the element to be insterted at : \n");
    scanf(" %d", &pos);
    insertElement(&arr, len, val, pos);
    printf("Modified array is : \n");
    printArray(arr, len);
    return 0;
}