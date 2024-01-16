#include <stdio.h>

int main (){
    int x;
    int y;
    int z;
printf ("Inserisci un numero x:\n");
scanf ("%d", &x);
printf ("Inserisci un numero y:\n");
scanf ("%d", &y);
printf ("Inserisci un numero z:\n");
scanf ("%d", &z);

if (x+y>z){
    if (y+z>x)
    if (z+x>y)
     printf ("x,y,z scelti possono essere lunghezze di un triangolo :\n");

}else{ 
     printf ("x,y,z scelti non possono essere lunghezze di un triangolo :\n");
}    

if (x != y){
    if (y!=z){
        if (z!= x){
            printf ("Il triangolo e' scaleno:\n");
        }else if (z==x){
            printf ("Il triangolo e' isoscele:\n");
        }      
    } else if (y == z){
        printf ("Il triangolo e' isoscele:\n");
    }
}else if (x == y){
    if (z == x){
        printf ("Il triangolo e' equilatero:\n");
    } else if (z != x){
        printf ("Il triangolo e' isoscele:\n");
    }
}
return (0);
}