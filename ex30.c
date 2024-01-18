#include <stdio.h>

int moltiplicazione(float x, float y){
    float m;

    m = x * y;
    printf ("Il risultato della moltiplicazione è %f\n",m);
    
return 0;
}

int somma (float x, float y){
    float s;

    s = x + y;
    printf ("il risultato della somma è %f\n",s);
    return 0;
}
int sottrazione (float x, float y){
    float st;

    st = x-y;
    printf ("Il risultato della sottrazione è %f\n",st);
    return 0;
}
int divisione (float x, float y){
    float d;

    if ( x!= 0 || y!=0 ){
        d = x/y;
        printf ("il risultato della divisione è %f\n",d);
    }
    else if (x==0 || y==0 ){
        printf ("La divisione non si può fare\n");
    }
    return 0;
} 

int main (){
    float x;
    float y;
    char o;

    printf ("Inserisci un numero x\n");
    scanf (" %f", &x);
    printf ("Inserisci un numero y\n");
    scanf (" %f", &y);
    printf ("Quale operazione vuoi eseguire?\n");
    scanf (" %c", &o);

    if (o == '+'){
        somma (x,y);
    }
    else if (o == '-'){
        sottrazione (x,y);
    }
    else if (o=='*'){
        moltiplicazione (x,y);
    }
    else if (o=='/'){
        divisione (x,y);
    }else{
        printf ("si\n");
    }
    return 0;
}