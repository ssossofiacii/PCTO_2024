#include <stdio.h>

int main (){
    int a;
    int somma;
    int i=1;

    printf ("Inserisci un numero :\n");
    scanf ("%d", &a); 
    somma = a; 
    while (a>0){
        printf ("La media è: %d\n", somma/i);
        printf ("Inserisci un numero :\n");
        scanf ("%d", &a);
        somma = a + somma;
        i++;
    }
    return 0;
}