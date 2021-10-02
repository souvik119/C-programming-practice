#include<stdio.h>

int main(void){
    char number[10]; //initialize char array number
    int i = 0;
    int flag = 0; //this will indicate whether int or float

    printf("Enter an int/float number : \n");
    scanf(" %s", number);

    while (number[i] != '\0'){
        if(number[i] == '.'){
            flag = 1;
            break;
        }
        i++;
    }
    if(flag){
        printf("Number %s is float", number);
    }else{
        printf("Number %s is int", number);
    }
    return 0;
}