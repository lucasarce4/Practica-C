#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define mes 30

int main (){

unsigned int arrAgua[mes];
int arrDias[mes];
srand(time(NULL));
int rand();
int i;
int promedioLluvias=0;

for (i=0;i<mes;i++){
    arrAgua[i] = rand()%200;
    arrDias[i] = i+1;
    promedioLluvias+=arrAgua[i];

    //printf("%d %d \n",arrAgua[i],arrDias[i]);
    }

for (i=0;i<mes;i++){
    if (arrAgua[0]>arrAgua[i]){
        arrAgua[0]=arrAgua[i];
        arrDias[0]=arrDias[i];
    } else if (arrAgua[29]<arrAgua[i]){
        arrAgua[29]=arrAgua[i];
        arrDias[29]= arrDias[i];
    }
}

printf("\t-Cantidad de agua que cayo durante el mes-\n");
printf("Minimo: %u ml de agua el dia %d\t Maximo: %u ml de agua el dia %d \nAgua caida promedio: %d ml\n",arrAgua[0],arrDias[0],arrAgua[29],arrDias[29],promedioLluvias/mes);



}
