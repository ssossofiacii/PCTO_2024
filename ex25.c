#include <stdio.h>

int main(){
    int n;
    int i;
        
    printf("Inserisci un numero:\n");
    scanf("%d", &n);
    i=n-1;

    while(n%i!=0){
        i = i-1;
    }if(i==1){
        printf("è un numero primo\n");
    }else{
        printf("non è un numero primo\n");
    }
}