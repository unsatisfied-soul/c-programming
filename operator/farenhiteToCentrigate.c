#include<stdio.h>

int main(){
    float celcius, farenhite;
    printf("enter a farenhite number : ");
    scanf("%f", &farenhite);
    celcius = (5*farenhite-160) / 9;
    printf("celcius number is %.2f", celcius);
    return 0;
}