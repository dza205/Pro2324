//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>

int main() {
    int a, b, c, menor, medio, mayor;

    // IN
    puts("Introduzca tres números para que este programa le devuelva el mayor de todos.");
    printf("\tTres números, ordenados como quiera: ");
    scanf("%d %d %d", &a, &b, &c);

    // ORDENAR CÓDIGO SUPER RECICLADO DEL OTRO EJERCICIO
    if (a < b) {
        menor = a;
        mayor = b;
    } else {
        menor = b;
        mayor = a;
    }
    if (c < menor) {
        medio = menor;
        menor = c;
    } else {
        if (c < mayor) {
            medio = c;
        } else {
            medio = mayor;
            mayor = c;
        }
    }

    // OUT
    printf("\nEl mayor es: %d", mayor);

    return 0;
}