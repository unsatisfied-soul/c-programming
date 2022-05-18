#include<stdio.h>

int main(){
    float base, inches,value;
    printf("enter two number:");
    scanf("%f %f", &base,&inches);
    value= (float)1/2*base*inches;
    printf("triangle area is :%.1f", value);
    return 0;
}