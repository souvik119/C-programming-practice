#include<stdio.h>

void printMatrix(int arr[2][2], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t", arr[i][j]); //space for next column item
        }
        printf("\n"); //for new row
    }
}

int matrixDeterminant(int arr[2][2]){
    int det = 0;
    det = arr[0][0]*arr[1][1] - arr[1][0]*arr[0][1]; //multiplying diagonal elements and subtracting them
    return det;
}

int main(void){
    int arr[2][2] = {{5, 6}, {3, 4}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int columns =  sizeof(arr[0]) / sizeof(arr[0][0]);
    int det;
    printf("Array is : \n");
    printMatrix(arr, rows, columns);
    det = matrixDeterminant(arr);
    printf("Determinant is : %d\n", det);
    return 0;
}