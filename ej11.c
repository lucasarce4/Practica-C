#include <stdio.h>

int main(){

int caracteres=30;
char cadena[caracteres];
int cadenaNumeros[caracteres];
int i;
int size = 0,mayusculas=0;



printf("ingrese una frase:\n");
fgets(cadena,caracteres,stdin);
for(i=0;i<caracteres;i++){
    if (cadena[i] != '\n'){
   cadenaNumeros[i] = (int)cadena[i];
   size++;
    }else {
    break;}
}
for(i=0;i<size;i++){
    if(cadenaNumeros[i]>=65 && cadenaNumeros[i]<=90){
         mayusculas++;
    }
}
printf("Cantidad de mayusculas en la frase: %d",mayusculas);

}
