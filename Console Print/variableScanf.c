#include <stdio.h>
int MiNumero;
int MiNumero2;
int main(){
    printf("¿Cual es su numero Favorito Entero?\n");
    scanf("%d",&MiNumero);
    printf("Variable Escaneada %d\n",MiNumero);
    printf("¿Cual es su numero Favorito Flotante?\n");
    scanf("%f",&MiNumero2);
    printf("Variable Escaneada %f\n",MiNumero2);
    return 0;
}