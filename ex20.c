#include <stdio.h>

int main (){
    int annoNascita;
    int annoLuna = 1969;

printf (" In quale anno sei nato/a?\n");
scanf ("%d", &annoNascita);

if (annoNascita == annoLuna){
    printf ("sei nato nel 1969\n", annoNascita);
}else if (annoNascita != annoLuna && annoNascita > annoLuna){
    printf ("non sei nato nel 1969, ma %d anni dopo\n", annoNascita-annoLuna);
}else if (annoNascita != annoLuna && annoNascita < annoLuna){
    printf ("non sei nato nel 1969, ma %d anni prima\n", annoLuna-annoNascita);  
}
return 0;
}