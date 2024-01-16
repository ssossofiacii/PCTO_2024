#include <stdio.h>

int main (){
    int x;
    int y;
    
printf ("Inserisci un numero x:\n");
scanf ("%d", &x);
printf ("Inserisci un secondo numero y:\n");
scanf ("%d", &y);

if (x%y){
    printf ("x non è multiplo di y\n");
}else{
    printf ("x è multiplo di y\n", x*y);
}
return (0);
}