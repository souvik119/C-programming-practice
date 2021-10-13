#include<stdio.h>

int func(int a, int b){
    printf("Value of a is : %d\n", a);
    printf("Value of b is : %d\n", b);
}

int main(void){
    int(*fptr)(int, int); //defining fptr
    fptr = func; //storing address of func in fptr

    func(2, 3);
    fptr(2, 3); //calling func using fptr
    return 0;
}