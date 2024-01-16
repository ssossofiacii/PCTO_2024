#include <stdio.h>

int main (){
    int a;
    int b;
printf ("Inserisci un numero a:\n");
scanf ("%d", &a);
printf ("Inserisci un numero b: \n");
scanf ("%d", &b);

if (a > b){
    printf ("Il primo è maggiore del secondo \n");

}else if (a < b){
    printf ("Il secondo è maggiore del primo \n");

}else if (a == b){
    printf ("I due numeri sono uguali \n");
}
return (0);
}
