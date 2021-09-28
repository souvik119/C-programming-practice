#include<stdio.h>

int main(void){
    int original_num, remainder, check_num;
    int reversed_num = 0;
    printf("Enter a number:\n");
    scanf(" %d", &original_num);

    check_num = original_num;

    //number reversed in the loop
    while(original_num > 0){
        remainder = original_num % 10;
        reversed_num = (reversed_num * 10) + remainder;
        original_num = original_num / 10;
    }

    if(reversed_num == check_num){
        printf("%d is palindrome\n", check_num);
    }else{
        printf("%d is not palindrome\n", check_num);
    }
    
    return 0;
}