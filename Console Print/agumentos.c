#include <stdio.h>

int main(int argc, char* argv[]){
    printf("iMPRME LOS ARGUMENTOS RECIBIDOS DEL PROGRAMA'n");
    for(int i=0;i<argc;i++){
        printf("\n");
        printf(argv[i]);
    }
    printf("\n");

    return 0;
}