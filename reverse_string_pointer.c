#include<stdio.h>
#include<string.h>

void reverseString(char* str){
    int i, len;
    char *begin_ptr, *end_ptr, ch;

    len = strlen(str);
    // Set the begin_ptr and end_ptr
    // initially to start of string
    begin_ptr = str;
    end_ptr = str;

    // Move the end_ptr to the last character
    for (i = 0; i < len - 1; i++){
        end_ptr++;
    }

    for (i = 0; i < len / 2; i++){
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;

        begin_ptr++;
        end_ptr--;
    }
}

int main(void){
    char str[100] = "Souvik";
    printf("Original string is : %s\n", str);

    reverseString(str);
    printf("Reverse of string is : %s\n", str);
    
    return 0;
}