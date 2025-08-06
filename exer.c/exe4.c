#include <stdio.h>

int main(){

    double preco, desconto, novoPreco;
    printf("Preço do produto: R$");
    scanf("%lf", &preco);

    desconto = preco * 0.09;
    novoPreco = preco - desconto;

    printf("O novo preço é de: R$ %.2lf", novoPreco);

    return 0;

}