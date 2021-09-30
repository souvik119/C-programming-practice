#include<stdio.h>

//An Armstrong number is a n digit number such that the sum of its digits raised to the nth power is equal to the number itself
//In this case the aim is to find all such 3 digit numbers between 100 to 500
int main(void){
    int saved_num, i, rem, sum;
    printf("Armstrong numbers between 1 and 500 are :\n");
    for(i=100; i<=500; i++){
        saved_num = i; //for comparing later
        sum = 0;
        while(saved_num != 0){
            rem = saved_num % 10;
            sum += rem * rem * rem;
            saved_num = saved_num / 10;
        }

        if(sum == i){
            printf("%d\n", i);
        }
    }
    return 0;
}