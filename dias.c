#include <stdio.h>

int main(){

    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade);

    idade *= 365;
    
    printf("Você viveu %d dias", idade);
    return 0;

}