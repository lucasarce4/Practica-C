
#include <stdio.h>

int main(){

char caracteres = 30;
char arrFrase[caracteres];
int longitudFrase=0;
int i;
int j=0;

printf("ingrese una frase\n");
fgets(arrFrase,caracteres,stdin);
printf("frase ingresada\n");
printf("%s\n",arrFrase);

for(int i=0;i<caracteres;i++){
    if (arrFrase[i] =='\0'){
        break;
    }
    longitudFrase++;
}
    longitudFrase -=1;
    printf("longitud de la frase %d\n",longitudFrase);
    j=longitudFrase;

    for(i=0;i<longitudFrase/2;i++){
            char temp = arrFrase[i];
            arrFrase[i]=arrFrase[j-1];
            arrFrase[j-1]=temp;
            j--;

    }

    printf("frase invertida : %s\n",arrFrase);
}
