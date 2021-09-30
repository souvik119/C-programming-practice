#include<stdio.h>

int main(void){
    int n, i;
    float sum = 0.0, x;
    printf("How many numbers do you want to average\n");
    scanf(" %d", &n);

    printf("Enter %d elements\n", n);
    for(i=0; i<n; i++){
        scanf(" %f", &x);
        sum += x;
    }

    printf("Sum of numbers is : %.2f", sum/(float)n);
    return 0;
}