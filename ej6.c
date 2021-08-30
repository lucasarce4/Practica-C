#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

srand(time(NULL)); //el ejercicio decia pedir numeros por teclado pero lo cambie para no tener que poner los 10 numeros cada vez que pruebo el programa
int rand();
int arr[10];

int i;
    printf("numeros\n");

    for (i=0;i<10;i++){
    arr[i]=rand();
    printf("%d \n",arr[i]);
    }

    printf("numeros ordenados\n");

    for (i=0;i<10;i++){

        if (arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i=0;
        }
    }

    for(i=0;i<10;i++){
    printf("%d\n",arr[i]);
    }
}

