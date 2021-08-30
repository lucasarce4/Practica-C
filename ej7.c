#include <stdio.h>

int main(){

char caracteres = 20;
char arrFrase[caracteres];
char arrFraseInvertida[caracteres];
int longitudFrase=0;
int i;
int j=0;

printf("ingrese una frase:\n");
fgets(arrFrase,caracteres,stdin);
printf("frase ingresada: \n");
printf("%s\n",arrFrase);

for(int i=0;i<caracteres;i++){      //se calcula la longitud de la frase
    if (arrFrase[i] =='\0'){        //para saber donde termina
        break;
    }
    longitudFrase++;
}
longitudFrase -=1; //se resta uno por usar el enter al ingresar la frase


for (i=longitudFrase;i>=0;i--){
        arrFraseInvertida[j]=arrFrase[i];
    j++;
}

arrFraseInvertida[longitudFrase+1]='\0'; //se vuelve a agregar \0 para indicar que termino la frase
printf("frase invertida: %s \n",arrFraseInvertida);
}
