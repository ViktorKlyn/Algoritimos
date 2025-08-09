#include <stdio.h>

int main(){

    double raio;
    double perimetro;
    double area;

    printf("Valor do raio do circulo:");
    scanf("%lf", &raio);

    perimetro = 2 * 3.14159 * raio;
    area = 3.14159 * raio * raio;
    
    printf("Perimetro: %lf\n Area: %lf", perimetro, area);
    return 0;

}