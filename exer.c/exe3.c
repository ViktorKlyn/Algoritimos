#include <stdio.h>

int main(){
    
    double valor;
    double reajuste;
    printf("Informe um valor:");
    scanf("%lf", &valor);
    
    reajuste = valor + (valor * 0.01);

    printf("O valor reajustado é: %.2lf", reajuste);

    return 0;

}