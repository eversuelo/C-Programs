##  Breve Introducción en C
El lenguaje de programación C fue creado por Brian Kernighan y Dennis Ritchie a mediados de los años 70. El lenguaje C es un lenguaje para programadores en el sentido de que proporciona una gran flexibilidad de programación y una muy baja comprobación de incorrecciones, de forma que el lenguaje deja bajo la responsabilidad del programador acciones que otros lenguajes realizan por si mismos. El lenguaje de programación en C  es uno de los más usados y fáciles de programar en la computadora, es un lenguaje de alto nivel, se utiliza para programar desde cualquier cosa, hasta sistemas operativos incluyendo windows y muchos otros. La Complejidad del programa  es como el interprete de Python, Git o Oracle Database y más. Conciliándose así como **C un lenguaje de Propósito General**.

¿Sandías Que?: El programa más corto de C es el <code><<programa vació>></code> que no hace nada.[Checar carpeta de Ejemplos]

## Que es un algoritmo en C
Un programa en C se compone de una o mas funciones, una de las funciones debe de ser obligatoriamente <code>main</code>. De un algoritmo previamente diseñado mediante Diagramas de Flujo o algun otro programa o recuerdo. 
### El Hola Mundo
~~~c
#include <stdio.h>  /*<--Cabezera Linea 1*/
int main(int argc, string argv[]){ //Linea  2
	printf("Hola Mundo/n");/*Programa o Instrucciones Linea 3*/
	return 0; /*Ejecución Perfecta Linea  4*/
	}
~~~

### Sintaxis Básica de Un Programa

Una función en C es un grupo de instrucciones  que realizan una o más acciones. Así mismo un programa  contendrá una serie de directivas <code>#include</code> que permitirá incluir  en los mismos archivos de cabecera que a su vez constaran de funciones y datos predefinidos en ellos <code><< Los Podemos Crear>></code>.La Directiva <code>#include</code> de la primera línea es necesaria para que el programa tenga salida. Se refiere a un archivo externo denominado  <code><stdio.h></code> en el que proporciona la información relativa a la función <code>printf()</code>. Observe que los ángulos <code><</code> y <code>></code> no son parte del nombre de archivo; se utilizan para indicar que el archivo es un archivo de biblioteca estándar C.

- Observe el punto y coma (;) al final de cada línea. **C requiere que cada sentencia termine en punto y coma** <code>;</code>. Se pueden poner  

#### Corrección y Marcación Básica de un programa en C

~~~c
#include <biblioteca.h>  //Directivas del Preprocesador
#define PI 3.141516     //Macros del Preprocesador
/****************************************
Declaraciones Globales son visibles para*
todo el programa y son dinamicas		*
*****************************************/
int global=0;
char globbalc='c';
//Funcion Principal Main
int main(...){//Argumentos Faltante
	printf("Validando Funciones y Procesos");
	return 0;
}
//Definiciones de Otras Funciones
tipo func1(...){

}
tipo func2(...){

}
~~~

*Nota*: En el Apartado de Programas Checar Demo.

### Datos Interesantes de C:

- Windows 10 el cual fue lanzado en 1985, se menciono en ese entonces que fue parcialmente escrito en C y parcialmente escrito en Lenguaje Ensamblador[Lenguaje Maquina].

- El lenguaje de programación C es mas procedimental que cualquier otra cosa, y puede ser usado por diferentes sistemas operativos.

### Directivas del preprocesador

El preprocesador en un programa C se puede considerar como un editor de textos inteligente que consta de direcivas (instrucciones al compilador antes de que se ejecute el programa principal). Las dos directivas más usuales son <code> #include </code>y <code> #define </code>.

###### Caracteristicas de las Directivas del Preprocesador

- Todas las drectivas del preprocesador comienzan con el signo numeral o almohadilla (#) que indica al compilador que lea las directivas antes de compilar parte (función) principal de un programa. 

- Las directivas son instrucciones al compilador.

- Las directivas generalmente pueden definir macros, nombre de constantes, archivos fuentes aducionales etc..

#### Directiva <code>#include</code>:
La directiva <code>#include</code> indica al compilador que lea el archivo fuente que viene a continuación de ella y su contenido lo inserte en la posición donde se encuentra dicha directiva. Estos archivos se denominan archivos de cabecera o de inclusión.

  - Los archivos de cabecera (archivos con <code>extension.h</code> que contiene codigo fuente C) se situan en un programa mediante la directiva del preprocesador <code>#include</code> con una instrucción que tiene el siguiente formato:

    ~~~c
    #include <nombrearchivo.h> 
    /*O bien*/ 
    #include "nombrearchivo.h"
    ~~~

    <code>nombrearchivo</code> debe ser un archivo de texto ASCII(su archivo fuente) que reside en su disco. EN realidad la directiva del pre procesador mezcla un archivo de disco en su programa fuente. El archivo  de cabecera más frecuente es <code>stdio.h</code>.Este archivo proporciona al compilador C la información necesaria sobre las funciones de biblioteca que realizan las operaciones de entrada y salida.

La directiva  <code>#include</code> puede adoptar uno de los siguientes formatos:

1. El formato (el nombre del archivo entre angulos) significa que de manera predeterminada, los archivos se encuentran en el directorio <code>#include <stdio.h></code> 
2. Este formato

---



## Configuración Múltiples Entornos

La programación no solo es escribir conjunto de letras y palabras que generen un programa, una rutina o un procedimiento, si no también necesitaremos herramientas diseñadas por los programadores, para asi poder compilar, diseñar y ejecutar nuestro programa correctamente. Las principales herramientas que utilizaremos para usar C se dividen en dos partes, compilador, IDE y sistema, continuación una breve lista de lo que necesitaremos.

Existe dos métodos tradicionales para realizar la ejecución de un programa:

1. El método tradicional  con un editor de programas fuente y un compilador cuyas ordenes se ejecutan desde la consola de línea de comandos.

2. El entorno de desarrollo integrado(IDE, Integrated Development Enviorment) que suele ser el elegido en el caso de desarrollos profesionales o cuando ya el programador a adquirido suficiente habilidad con los programas  editor y compilador y sobre todo el conocimiento de todo el proceso.

## Configurando tu entorno Local.

¿Existe algún compilador universal disponible para C?

Realmente no, hay programas que sean buenos y adecuados para X sistema operativo pero por lo general:

- Instala Visual Studio Express o MinGW si tu computadora esta corriendo sobre Windows.
- Instala gcc si tu computadora tiene linux como sistema operativo(Paquete Build Essentials).
- Instala Xcode en caso de que tu computadora este corriendo mac.

### Declaraciones Globales

Las declaraciones Globales indican al compilador  que las funciones definidas por el usuario o variables declaradas son comunes a todas  las funciones de su programa, se situan antes de la función <code>main()</code>. Cualquier  función del programa, puede acceder a la variable <code>global_int</code>.Las declaraciones de las funciones se llama prototipo.  Las variables y constantes  globales se declaran y definen fuera de la definición  de las funciones, generalmente en la cabecera del programa, antes de <code>main()</code>,mientras que las variables y constantes locales se declaran y definen en la cabecera del cuerpo  de la funcion  principal o en la cabecera de cualquier bloque. Las sentencias situadas en el interior del cuerpo de la función <code>main()</code>. o cualquier otra  funcion deben de terminar en <code>;</code>.

**El siguiente Programa es una estructura de declaraciones globales**.

~~~c
#define TAM_LINEA 65 //Constante Global Predefinida
#include <stdio.h>//Input Ouput
#include <string.h>
int global_int = 5;//variable global
void visualizar_Global();//funcion global
int main()
{
    //sentencias en Codigo o Bloque de Sentencias.
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
~~~

#### ¿Sabias que?:

Una función C es un subprograma que devuelve un único valor, un conjunto de valores o realiza alguna tarea Especifica como E/S.Las sentenias incluidas entre las llaves  { } se denominan bloque. Un programa solo debe de tener una función main. 

## Hola Mundo & Funciones Basicas

#### Funciones Definidas por el Usuario

Un programa en C es una colección de funciones.

### Los Elementos de un Programa en C

## Multiples Operaciones y Jerarquias

## Impresiones en pantalla

## 

## Ciclos y Condicionales

## Concepto Variable

## Tipos de Datos

## Apuntadores

## Compilacion por Partes

## File Input/Output

## Cabezeras & Cambio de Compilador

## Variables Globales

### Operaciones Matematicas Avanzadas

## Evolucion en C++

## Data Structures Between C++/C

## Introduccion a Metodos Numericos.

## 





