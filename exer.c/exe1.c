#include <stdio.h>

int main(){
    int n1;
    int n2;
    double media;
    printf("Escolha um número inteiro:");
    scanf("%d", &n1);
    printf("Escolha outro número inteiro:");
    scanf("%d", &n2);

    media = (n1 + n2) / 2;

    printf("A média é: %.2lf", media);
    return 0;
}