#include <stdio.h>

int main(){
    int i=0;
    char pippo [5];
    scanf ("%s",pippo);
    printf ("%s\n", pippo);
    while (pippo[i]!='\0'){
        if ((pippo[i])>=97 && (pippo[i])<=122){
            pippo [i]= pippo [i]-32;
            i= i++;
        }
    } 
    printf ("%s\n",pippo);
return 0;
}