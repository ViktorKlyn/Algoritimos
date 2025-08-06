#include <stdio.h>

int main(){
    char letra;
    int num;
    printf("Escolha uma letra:");
    scanf("%c", &letra);
    printf("Escolha um número:");
    scanf("%d", &num);
    printf("Você escolheu a letra: %c e o número: %i", letra, num);
    return 0;
}