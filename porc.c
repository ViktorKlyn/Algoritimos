#include <stdio.h>

int main(){

    double num;
    double num2;
    printf("Digite um número:");
    scanf("%lf", &num);

    num2 = num * 0.04;
    
    printf("Valor final: %.2lf", num2);
    return 0;

}