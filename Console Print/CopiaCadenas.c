/*Programa que copia una cadena en un arreglo de caracteres
nombre del archivo Copia Cadenas utiliza dos archivos de cabecera
El primero es el flujo de entrda y salida y el segundo es de cadenas*/
#include <stdio.h>
#include <string.h>

int main(){
    #include "programador.c"
    char mensaje[20];//Cadena de 20 caraceres
    strcpy(mensaje,"Mensaje Copiado\n");//copiando la cadena en un identificador
    char variable[50]="Es una Varible\n";
    printf(mensaje);
    printf(variable);
    return 0;
}