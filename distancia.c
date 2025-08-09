#include <stdio.h>

int main(){

    double dist, tempo, vm;
    printf("Distancia (km):");
    scanf("%lf", &dist);
    printf("Tempo (hora(s)):");
    scanf("%lf", &tempo);

    vm = dist / tempo;

    printf("A velocidade média é: %.2lf km/h", vm);
    return 0;

}