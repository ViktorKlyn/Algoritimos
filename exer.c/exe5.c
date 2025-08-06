#include <stdio.h>

int main(){

    char c1, c2, c3;
    printf("Informe o primeiro caracter:");
    scanf("%c", &c1);
    printf("Informe o segundo caracter:");
    scanf(" %c", &c2);
    printf("Informe o terceiro caracter:");
    scanf(" %c", &c3);
    printf("Os caracteres informados foram: %c, %c, %c", c1, c2, c3);

    return 0;
    
}