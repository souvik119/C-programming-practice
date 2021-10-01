#include<stdio.h>

int findFactors(int i);

int main(void){
    int numberOfPrimes, i=2, count = 0, ret_value;
    printf("Enter number of prime terms needed\n");
    scanf(" %d", &numberOfPrimes);
    printf("First %d prime numbers are : \n", numberOfPrimes);
    while(count != numberOfPrimes){
        ret_value = findFactors(i);
        i++;
        if(ret_value != 0){
            count++;
        }
    }
    return 0;
}

int findFactors(int i){
    int j;
    int prime = 0;
    for(j=2; j<i/2; j++){
        if(i%j == 0){
            prime = 1;
            break;
        }
    }
    if(prime == 0){
        printf("%d\n", i);
        return i;
    }else{
        return 0;
    }
}