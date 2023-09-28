#include <stdio.h>


void convertirBase(int number, int targetbase) {
    int nombres = number;
    char resultat[32];
    int index = 0;


    while (number > 0) {
        int reste = number % targetbase;

        if (reste < 10) {
            resultat[index] = reste + '0';
        } else {
            resultat[index] = reste - 10 + 'A';
        }

        number /= targetbase;
        index++;
    }


    printf("Le nombre %d en base %d est équivalent à ", nombres, targetbase);

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", resultat[i]);
    }

    printf("\n");
}

