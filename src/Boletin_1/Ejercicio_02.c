//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>
#define MAX 30

int main() {
    char nombre[MAX], apellido1[MAX], apellido2[MAX];
    int edad, edadjubil = 67, tjubil;
    // Mensajes y Lectura de entrada Intento 2
    printf("Introduzca su nombre y sus apellidos a continuación: ");
    scanf("%s %s %s",nombre,apellido1,apellido2);
    printf("Ahora, introduzca su edad: ");
    scanf("%d",&edad);

    /*
    // Mensajes y Lectura de entrada Intento 1
    printf("Nombre: ");
    gets(nombre);
    printf("Primer Apellido: ");
    gets(apellido1);
    printf("Segundo Apellido: ");
    gets(apellido2);
    */

    // Operación
    tjubil = edadjubil - edad;

    // Salida en Pantalla
    printf("Sr/Sra. %s, le faltan aún %d años para jubilarse",apellido1,tjubil);
    // printf("%s %s %s %d",nombre,apellido1,apellido2,edad);

    return 0;
}
