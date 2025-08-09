#include <stdio.h>

int main(){

    int num;
    printf("Escolha um número inteiro:");
    scanf("%d", &num);

    num += 1;
    
    printf("O número + 1 é: %d", num);
    return 0;

}