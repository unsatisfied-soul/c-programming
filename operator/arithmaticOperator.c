#include<stdio.h>
int main(){
    int num1, num2,sum;
    float avg
;    printf("enter two number : ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("value is %d + %d = %d\n", num1, num2, sum);
    avg = (float)sum/2;
    printf("avg number is : %.1f", avg);
    return 0;
}