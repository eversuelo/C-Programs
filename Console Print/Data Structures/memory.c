#include <stdio.h>

int main(){
    int var;//Identficador de Variable
    int *pointer;//Appuntador
    var=10;//Valor
    pointer=&var;//Apuntamos a la memoria de var
    printf("Valor almacenado en la variable %d\n",var);
    *pointer=15;
    printf("Valor almacenado en la variable %d\n",var);

    printf("La direccion de memoria es %p\n",&var);
    printf("La direccion de memoria es %p\n",pointer);

    return 0;

}