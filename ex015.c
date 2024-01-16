#include <stdio.h>

int main (){
    int a;
    int b;
    int c;
printf ("Inserisci numero a:\n");
scanf ("%d", &a);
printf ("inserisci numero b:\n");
scanf ("%d", &b);
printf ("inserisci numero c:\n");
scanf ("%d", &c);

if (a-b == b-c){
    printf ("a,b,c sono in progressione aritmetica:\n");
}else if (a-b != b-c){
    printf ("a,b,c non sono in progressione aritmetica:\n");
}
return (0);
}