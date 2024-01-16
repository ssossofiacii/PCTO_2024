#include <stdio.h>

int main (){
    int etaPatente;
    int etaUtente;
printf ("A quanti anni puoi prendere la patente nel tuo stato?: \n");
scanf ("%d", &etaPatente);
printf ("Quanti anni hai?:\n");
scanf ("%d", &etaUtente);
if (etaUtente>=etaPatente){
    printf ("puoi prendere la patente!\n");
}else if (etaUtente<etaPatente){
    printf ("non puoi prendere la patente!!\n");
}
return (0);
}