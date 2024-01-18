#include <stdio.h>


int radiceQuadrata (int delta){

    float temp, sqrt;

    sqrt = delta/2;
    temp = 0;
    while (sqrt != temp){
        temp = sqrt;
        sqrt = ( delta/temp + temp) / 2;
    }
    return sqrt;
}

int main (){
    int a;
    int b;
    int c;
    int delta;
    int moltiplicazione;
    int potenza;
    int x1;
    int x2;
    
    printf ("Inserisci un valore a\n");
    scanf ("%d", &a);
    printf ("Inserisci un valore b\n");
    scanf ("%d", &b);
    printf ("Inserisci un valore c\n");
    scanf ("%d", &c);
    moltiplicazione = 4 * a *c;
    potenza = b * b;
    delta = potenza - moltiplicazione;

    if (delta > 0 ){
        x1 = (- b + radiceQuadrata(delta))/(2 * a);
            printf ("L'equazione ammette come soluzione 'x1' %d\n", x1);
        x2 = (- b - radiceQuadrata (delta))/(2 *a);
            printf("L'equazione ammette come soluzione 'x2' %d\n", x2);
    }
    else if ( delta == 0 ){
        x1 = - b/(2 * a);
        x2 = -  b/(2 * a);
        printf ("L'equazione ammette come soluzioni 'x1' %d e 'x2' %d\n", x1,x2);
    }
    else{
        printf ("L'equazione non ammette soluzioni reali\n");
    }
return 0;
}
