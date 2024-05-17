#include <stdio.h>

int main(){
    int num, result;
    printf("Enter the number: \n");
    scanf("%d",&num);
    if(num/2==0){
        printf("Even Number");
    }
    else {
        printf("Odd Number");
    }
}