#include <stdio.h>

int main(){

    int a, b, c, x;
    printf("Informe a:");
    scanf("%d", &a);
    printf("Informe b:");
    scanf("%d", &b);
    printf("Informe c:");
    scanf("%d", &c);

    x = 2 * ((a - c)/8)-b*5;

    printf("O resultado é: %d", x);

    return 0;
}