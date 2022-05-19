#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 40;

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("num1 value is = %d and num2 value is %d", num1, num2);  
}