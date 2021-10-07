#include<stdio.h>
#include<math.h>

void printMatrix(int arr[3][3], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t", arr[i][j]); //space for next column item
        }
        printf("\n"); //for new row
    }
}

int matrixTrace(int arr[3][3], int rows, int columns){ //trace is sum of diagonal elements of a square matrix
    int i, j, trace = 0;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            if(i == j){
                trace += arr[i][j];
            }
        }
    }
    return trace;
}

float matrixNormal(int arr[3][3], int rows, int columns){ //normal is the sqrt of sum of squares of all elements of a square matrix
    int i, j, sum = 0;
    float normal;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            sum += arr[i][j]*arr[i][j];
        }
    }
    normal = sqrt((float)sum);
    return normal;
}

int main(void){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int columns =  sizeof(arr[0]) / sizeof(arr[0][0]);
    int trace; 
    float normal;
    printf("Array is : \n");
    printMatrix(arr, rows, columns);
    trace = matrixTrace(arr, rows, columns);
    normal = matrixNormal(arr, rows, columns);
    printf("Matrix trace is : %d\n", trace);
    printf("Matrix normal is : %.2f\n", normal);
    return 0;
}