#include <stdio.h>

int main(){

    double n1, n2, n3;
    double media;

    printf("Digite a primeira nota:");
    scanf("%lf", &n1);
    printf("Digite a segunda nota:");
    scanf("%lf", &n2);
    printf("Digite a terceira nota:");
    scanf("%lf", &n3);

    media = (n1 + n2 + n3) / 3;
    
    printf("A média final é: %.2lf", media);
    return 0;

}