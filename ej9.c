#include <stdio.h>
#include <ctype.h>

int main(){
int caracteres=20;
char arr[caracteres];
int i;
int vocales=0;


    printf("ingrese una frase:\n");
    fgets(arr,caracteres,stdin);
    for(i=0;i<caracteres;i++){
        arr[i]=tolower(arr[i]);

    }
    printf("frase: %s\n",arr);

    for(i=0;i<caracteres;i++){
    switch (arr[i]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': {vocales++;}
        default: break;
        }
    }

    printf("cantidad de vocales: %d\n",vocales);


}

