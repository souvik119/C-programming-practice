#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num_elements, i;
    int *ptr; //ptr to first element in the list
    int sum = 0;
    printf("Enter number of elements\n");
    scanf(" %d", &num_elements);
    ptr = (int *) malloc(num_elements * sizeof(int)); //dynamically create an integer array of size n

    if(ptr == NULL){
        printf("Error! Memory not allocated\n");
        return 0;
    }

    printf("Enter elements in the array : \n");
    for(i=0; i<num_elements; i++){
        scanf(" %d", ptr+i); //ptr has the value of address of first element
        sum += *(ptr + i); //*ptr has the value of the memory element
    }

    printf("Elements of the array are : \n");
    for(i=0; i<num_elements; i++){
        printf("%d\t", *(ptr + i));
    }
    printf("\nSum of the numbers of array is : %d", sum);

    //need to free up memory at the end
    free(ptr);
    return 0;
}