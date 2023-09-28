#include <stdio.h>
#include "convertirBaseee.c"

int main() {
    int nombre,baseCible;


    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    getchar();

    printf("Entrez la base cible : ");
    scanf("%d", &baseCible);

    convertirBase(nombre,baseCible);

    return 0;
}