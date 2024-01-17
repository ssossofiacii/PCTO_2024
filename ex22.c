#include <stdio.h>

void calcolaPotenzadi4 (){
    int numero;
    int potenzaDi4;

    printf ("Inserisci un numero:\n");
    scanf ("%d", &numero);
    potenzaDi4 = numero * numero * numero * numero;
    printf ("L'elevamento a potenza 4 di %d è %d\n", numero,potenzaDi4);
}

int main (){
    calcolaPotenzadi4();
    return 0;
}