//
// Created by Pablo on 04/12/2023.
//
#include <stdio.h>

#define incremetocoste(x, y) (x * (1 + y));
#define costeporcredito(x, y) (x * y);
#define MAX 20
#define CREDITBASE 15.45 // EL PRECIO POR CRÉDITO BASE

int main() {
    char nombre[MAX], apellido[MAX];
    int cm1, cm2, cm3, edad;
    float pm1, pm2, pm3, tprecio;

    // INPUT
    puts("Introduzca los datos solicitados para elaborar el recibo de su matrícula: ");
    printf("\tNombre, primer apellido y edad: ");
    scanf("%s %s %d", nombre, apellido, &edad);
    printf("\tIndique la cantidad de créditos por matrícula (M1 M2 M3): ");
    scanf("%d %d %d", &cm1, &cm2, &cm3);

    // CÁLCULO
    pm1 = cm1 * CREDITBASE;
    pm2 = cm2 * incremetocoste(CREDITBASE, 0.25);
    pm3 = cm3 * incremetocoste(CREDITBASE, 0.50);
    // POR EL EJEMPLO DEL BOLETÍN ESTE CÁLCULO NO TIENE SENTIDO
    // pm3 = cm3 * incremetocoste(CREDITBASE, 0.875); // EL 0.875, SALE DE SUPONER QUE EL INCREMENTO DEL 50% ESTA SOBRE EL PRECIO DE LA SEGUNDA MATRÍCULA Y NO EL BASE
    tprecio = pm1 + pm2 + pm3;

    // OUTPUT
    printf("\n***********************************************************************\n");
    printf("*******\t\t\t\t\t%s %s: %d años\t\t\t\t\t*******\n", nombre, apellido, edad);
    printf("Créditos M1   Coste M1\tCréditos M2   Coste M2\tCréditos M3    Coste M3\n");
    printf("\t\t%d\t\t%.2f€\t\t\t%d\t\t%.2f€\t\t\t%d\t\t%.2f€\n", cm1, pm1, cm2, pm2, cm3, pm3);
    printf("*******\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*******\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t  Coste Total Matrícula\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%.2f€\n", tprecio);
    printf("***********************************************************************\n");

    return 0;
}
