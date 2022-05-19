#include <stdio.h>
int main(){
    int num1, num2;

    printf("enter two number here :");
    scanf("%d \n %d", &num1, &num2);
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;
    printf("num1 is %d and num2 is %d", num1 , num2);
    return 0;
}