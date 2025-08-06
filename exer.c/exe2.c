#include <stdio.h>

int main(){
    
    int n1;
    int quadrado;
    printf("Escolha um número inteiro n:");
    scanf("%d", &n1);
    
    quadrado = n1 * n1;

    printf("%d ao quadrado é: %d\n",n1, quadrado);
    return 0;

}