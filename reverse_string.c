#include<stdio.h>

int main(void){
    char str[100], rev_str[100];
    int i, j, str_len = 0;

    printf("Enter string to be reversed\n");
    scanf("%s", str);

    //calculate string length
    while(str[str_len] != '\0'){
        str_len++;
    }

    j = str_len - 1; //starting at last position before \0
    //reversing string
    for(i=0; i<str_len; i++){
        rev_str[i] = str[j];
        j--;
    }

    printf("Reversed string is : %s\n", rev_str);
    return 0;
}