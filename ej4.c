#include <stdio.h>

int main (){
int arrEnteros[100];
int arrPares[50];
int arrImpares[50];
int i;
int j=0;
int h=0;

for (i=0;i<100;i++){
    arrEnteros[i]=i+1;
}

for (i=0;i<100;i++){
    if (arrEnteros[i]%2 == 1){
        arrImpares[j]=arrEnteros[i];
        j++;
    } else{
        arrPares[h]=arrEnteros[i];
        h++;
    }
}
printf("numeros impares//numeros pares\n");
for (i=0;i<50;i++){
    printf("%d \t\t %d \n", arrImpares[i],arrPares[i]);
}
}
