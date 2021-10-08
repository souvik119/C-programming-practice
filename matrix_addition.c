#include<stdio.h>

void printMatrix(int arr[3][3], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t", arr[i][j]); //space for next column item
        }
        printf("\n"); //for new row
    }
}

void matrixAddition(int arr1[3][3], int arr2[3][3], int rows, int columns){
    int i, j;
    int add[3][3];
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            add[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Resultant addition matrix is : \n");
    printMatrix(add, rows, columns);
}

int main(void){
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int rows = sizeof(arr1) / sizeof(arr1[0]);
    int columns =  sizeof(arr1[0]) / sizeof(arr1[0][0]);
    printf("1st Array is : \n");
    printMatrix(arr1, rows, columns);
    printf("2nd Array is : \n");
    printMatrix(arr2, rows, columns);
    matrixAddition(arr1, arr2, rows, columns);
    return 0;
}