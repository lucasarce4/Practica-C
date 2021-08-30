#include <stdio.h>

int main (){

int arr[100];
int i;
printf("Numero ascendientes\n");
for (i =0;i<100;i++){
    arr[i]=i+1;
printf("%d\n",arr[i]);
}
printf("Numeros descendientes\n");
for (i=99;i>=0;i--){
    printf("%d\n",arr[i]);
}
}
