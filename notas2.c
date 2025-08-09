#include <stdio.h>

int main(){

    double n1, n2, n3, media;
    printf("Digite a primeira nota:");
    scanf("%lf", &n1);
    printf("Digite a segunda nota:");
    scanf("%lf", &n2);
    printf("Digite a terceira nota:");
    scanf("%lf", &n3);

    media = (n1*2 + n2*3 + n3*5) / 10;
    
    printf("A média final é: %.2lf", media);
    return 0;

}