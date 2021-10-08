#include<stdio.h>

void printMatrix1(int arr[3][2], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t", arr[i][j]); //space for next column item
        }
        printf("\n"); //for new row
    }
}

void printMatrix2(int arr[2][3], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t", arr[i][j]); //space for next column item
        }
        printf("\n"); //for new row
    }
}

void printMatrix3(int arr[3][3], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t", arr[i][j]); //space for next column item
        }
        printf("\n"); //for new row
    }
}

void matrixMultiplication(int arr1[3][2], int arr2[2][3], int row1, int column1, int row2, int column2){
    int mul[3][3]={{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}; //initalizing to 0
    int i, j, k;
    for(i=0; i<row1; i++){
        for(j=0; j<column2; j++){
            for(k=0; k<column1; k++){
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("Matrix multiplication is : \n");
    printMatrix3(mul, row1, column2);
}

int main(void){
    int arr1[3][2] = {{1, 2}, {4, 5}, {7, 8}};
    int arr2[2][3] = {{10, 11, 12}, {13, 14, 15}};
    int row1 = sizeof(arr1) / sizeof(arr1[0]);
    int column1 =  sizeof(arr1[0]) / sizeof(arr1[0][0]);
    int row2 = sizeof(arr2) / sizeof(arr2[0]);
    int column2 =  sizeof(arr2[0]) / sizeof(arr2[0][0]);
    printf("1st Array is : \n");
    printMatrix1(arr1, row1, column1);
    printf("2nd Array is : \n");
    printMatrix2(arr2, row2, column2);
    matrixMultiplication(arr1, arr2, row1, column1, row2, column2);
    return 0;
}