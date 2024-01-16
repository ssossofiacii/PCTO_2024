#include <stdio.h>

int main (){
    float x;
    float y;
    float z;
printf ("Inserisci un numero x:\n");
scanf( "%f", &x);
printf ("Inserisci un numero y:\n");
scanf ("%f", &y);
printf ("Inserisci un numero z:\n");
scanf ("%f", &z);

if (x+y>z){
    if (y+z>x)
    if (z+x>y)
     printf ("x,y,z scelti possono essere lunghezze di un triangolo :\n");

}else{ 
     printf ("x,y,z scelti non possono essere lunghezze di un triangolo :\n");
}    
return (0);
}