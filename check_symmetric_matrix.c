#include<stdio.h>

void printMatrix(int arr[4][4], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t", arr[i][j]); //space for next column item
        }
        printf("\n"); //for new row
    }
}

void checkSymmetric(int arr[4][4], int rows, int columns){
    int i, j;
    int transpose[4][4];
    int symm = 0;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            transpose[j][i] = arr[i][j]; //filpping rows and columns
        }
    }
    printf("Transpose matrix is : \n");
    printMatrix(transpose, rows, columns);
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            if(transpose[i][j] != arr[i][j]){
                symm = 1;
                break;
            }
        }
    }
    if(symm == 0){
        printf("Matrix is symmetric\n");
    }else{
        printf("Matrix is not symmetric\n");
    }

}

int main(void){
    int arr[4][4] = {{1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}};
    int rows = sizeof(arr) / sizeof(arr[0]); //dividing total size of array by size of 1 row
    int columns =  sizeof(arr[0]) / sizeof(arr[0][0]); //dividing size of 1 row by size of 1 element
    printf("Original matrix is : \n");
    printMatrix(arr, rows, columns);
    checkSymmetric(arr, rows, columns);
    return 0;
}