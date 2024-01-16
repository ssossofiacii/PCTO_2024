#include <stdio.h>

int main (){
    float temperaturaCelsius;
    float moltiplicazione;
    float somma;
    float sommadue;
printf ("Inserire temperaturaCelsius:\n");
scanf ("%f", &temperaturaCelsius);

if (temperaturaCelsius<-273.5){
    printf ("errore!\n");
}
moltiplicazione = 9/5 * temperaturaCelsius;
somma = moltiplicazione + 32;
    printf ("gradi Fahrenheit: %f \n ", somma);
sommadue = temperaturaCelsius + 273.15;
    printf ("gradi Kelvin: %f \n", sommadue);
return (0);
}