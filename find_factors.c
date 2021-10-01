#include<stdio.h>

int main(void){
    int i, count = 0, num;
    printf("Enter the number to find factors\n");
    scanf(" %d", &num);

    for(i=2; i<= num/2; i++){
        if(num%i == 0){
            printf("%d\n", i);
            count ++;
        }
    }
    if(count == 0){
        printf("%d has no factors\n", num);
    }
    return 0;
}