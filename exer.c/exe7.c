#include <stdio.h>

int main(){

    int n1, n2;
    int soma, mult, subt, divi, resdivi;
    printf("Digite o primeiro número:");
    scanf("%d", &n1);
    printf("Digite o segundo número:");
    scanf("%d", &n2);

    soma = n1 + n2;
    mult = n1 * n2;
    subt = n1 - n2;
    divi = n1 / n2;
    resdivi = n1 % n2;

    printf("Soma: %d\n", soma);
    printf("Multiplicação: %d\n", mult);
    printf("Subtração: %d\n", subt);
    printf("Divisão: %d\n", divi);
    printf("Resto da Divisão: %d\n", resdivi);

    return 0;
}