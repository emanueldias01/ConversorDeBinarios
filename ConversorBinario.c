#include<stdio.h>

int main(){

    int numeroDecimal;
    printf("Numero decimal a ser convertido: ");
    scanf("%d", &numeroDecimal);


    int numeroOpc = numeroDecimal;
    int tamanho = 0;
    while (numeroOpc/10 > 0){
        tamanho++;
        numeroOpc /= 10;
        
    }
    tamanho++;
    printf("%d", tamanho);


    return 0;
}