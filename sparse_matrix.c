#include<stdio.h>

void printMatrix(int arr[][4], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t", arr[i][j]); //space for next column item
        }
        printf("\n"); //for new row
    }
}

void checkSparse(int arr[][4], int rows, int columns){
    int i, j;
    int counter = 0;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            if(arr[i][j] == 0){
                counter++;
            }
        } 
    }
    if(counter > (rows*columns)/2){
        printf("Since number of zeros is more than non zeros, matrix is sparse\n");
    }else{
        printf("Since number of zeros is less than non zeros, matrix is not sparse\n");
    }
}

int main(void){
    int arr[2][4] ={{0, 0, 0, 13}, {0, 0, 0, 17}};
    int rows = sizeof(arr) / sizeof(arr[0]); //dividing total size of array by size of 1 row
    int columns =  sizeof(arr[0]) / sizeof(arr[0][0]); //dividing size of 1 row by size of 1 element
    printf("Array is : \n");
    printMatrix(arr, rows, columns);
    checkSparse(arr, rows, columns);
    return 0;
}