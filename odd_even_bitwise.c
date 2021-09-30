#include<stdio.h>

//detrmine whether number is odd/even using bitwise & operator
//x&1 returns true if the LSB(Least significant Bit) of binary representation of an integer x is 1. 
//It returns false if the LSB or the Right most bit in a binary sequence is 0
//In binary representation of an integer, if LSB is 1 then it is odd and if LSB is 0 then it is even.
int main(void){
    int num;
    for(num=1; num<=10; num++){
        if(num&1){
            printf("%d is odd\n", num);
        }else if(!(num&1)){
            printf("%d is even\n", num);
        }
    }
    return 0;
}