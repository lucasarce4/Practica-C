#include <stdio.h>

int main (){

int caracteres = 30;
char cadena[caracteres];
char cadenaPalabras[caracteres];
int i,j=0;
int size=0;

printf("ingrese una frase\n");
fgets(cadena,caracteres,stdin);

for(i=0;i<caracteres;i++){

    if(cadena[i]!='\n'){
        cadenaPalabras[i]=cadena[i];
        size++;
    if(cadena[i]==' '){
        cadenaPalabras[i]='\n';
        j++;
    }
    }else {break;}
}
cadenaPalabras[size]='\0';

printf("Palabras que componen la frase:%d \n%s\n",j,cadenaPalabras);
}
