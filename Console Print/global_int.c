#define TAM_LINEA 65 //Constante Global Predefinida
#include <stdio.h>//Input Ouput
#include <string.h>
int global_int = 5;//variable global
void visualizar_Global();//funcion global
int main()
{
    //sentencias en Codigo
    printf("Ejecute\n");
    visualizar_Global();
    return 0;
}
void visualizar_Global()
{
    char linea[TAM_LINEA];
    strcpy( linea,"Menos Lineas\n");
    printf(linea);
    printf("%d", global_int);
}