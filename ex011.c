#include <stdio.h>

int main (){
    int a;

printf ("Inserisci numero a :\n");
scanf ("%d", &a);

if (a >= 18){
    printf ("puoi prendere la patente \n");
}else if (a < 18){
    printf ("non puoi prendere la patente \n");
}
return (0);
}