#include<stdio.h>

void printArray(int arr[], int len){
    int i;
    for(i=0; i<len; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main(void){
    int arr[] = {1, 2, 4, 6, 4, 2, 3, 4};
    int i, j, k;
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Original array is : \n");
    printArray(arr, len);

    for(i=0; i<len; i++){
        for(j=i+1; j<len; j++){ //starting from next element to compare
            if(arr[i] == arr[j]){
                for(k=j; k<len; k++){
                    arr[k] = arr[k+1]; //moving elements to the left
                }
                len--; //because 1 element was deleted
                j--; //because shifting happended dont increment j
            }
        }
    }

    printf("Modified array is : \n");
    printArray(arr, len);
    return 0;
}