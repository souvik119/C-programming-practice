#include<stdio.h>
#include<ctype.h> //to use islower function

int main(void){
    char ch;
    printf("Enter an alphabet\n");
    ch = getchar(); //similar to scanf
    printf("Reverse of %c is : ", ch);
    if(islower(ch)){
        putchar(toupper(ch)); //similar to printf
    }else{
        putchar(tolower(ch));
    }
    return 0;
}

