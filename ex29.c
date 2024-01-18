#include <stdio.h>

char verifica (){
    char lettera;
    if ((lettera >= 97 && lettera <= 122)||(lettera >= 65 && lettera <= 90 )){
       if ((lettera == 'a' || lettera == 'A') || (lettera == 'e' || lettera == 'E') || (lettera == 'i' || lettera == 'I')||( lettera == 'o' ||lettera == 'O' )||(lettera == 'u'|| lettera == 'U')){
        printf ("La lettera scelta è una vocale\n");
       }else{
        printf ("La lettera scelta è una consonante\n");
        }
    }else{
        printf ("Il carattere scelto è un simbolo\n");
    }
}


int main (){
   char lettera;

    printf ("Inserisci una lettera\n");
    scanf ("%c", &lettera); 
    verifica ();
}
