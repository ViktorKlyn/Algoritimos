#include <stdio.h>

int main(){

    double preco, distribuidor, impostos, pf;
    printf("Preço do veículo:");
    scanf("%lf", &preco);

    distribuidor = preco + (preco * 0.28);
    impostos = preco + (preco * 0.45);
    pf = distribuidor + impostos;
    
    printf("O valor final é: %lf", pf);
    return 0;

}