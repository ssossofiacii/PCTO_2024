#include <stdio.h>

int main (){
    int annoX;
printf ("Inserisci annoX:\n");
scanf ("%d", &annoX);

if (annoX %4 == 0){
    printf ("annoX è bisestile \n");
}else if (annoX % 100 !=0){
    printf ("annoX non è bisestile\n");
}else if (annoX %400 == 0){
    printf ("annoX è bisestile\n");
}else {
    printf ("annoX non è bisestile\n");
}
return (0);
}