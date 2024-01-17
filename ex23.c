#include <stdio.h> 

int main (){
    int numero;
    float temp, sqrt;

    printf ("Inserisci un numero:\n");
    scanf ("%d", &numero);
    sqrt = number/2;
    temp = 0;

    while (sqrt != temp){
        temp = sqrt;
        sqrt = ( numero/temp + temp) / 2;
    }
    printf("The square root of '%d' is '%f'", number, sqrt);
    return (0);
    }

}