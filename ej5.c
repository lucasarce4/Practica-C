#include <stdio.h>

int main (){

int arr[10];
int numero,i;

    printf("ingrese 10 numeros\n");

    for (i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    printf("numeros ingresados\n");

    for(i=0;i<10;i++){
        printf("%d \n",arr[i]);
    }

    int suma=arr[0], multiplicacion=arr[0], resta=arr[0], division=arr[0];
    for(i=1;i<10;i++){
        suma+=arr[i];
        multiplicacion *=arr[i];
        resta -=arr[i];
        division = division/arr[i];
    }
    printf("Suma:%d \t Resta:%d \t Multiplicacion:%d \t Division:%d \t",suma,resta,multiplicacion,division);
}
