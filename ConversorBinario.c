#include<stdio.h>

void operacaoBinario(int numeroDecimal){
    while(numeroDecimal/2 >= 1){
        printf("%d", numeroDecimal%2);
        if(numeroDecimal <= 2){
            printf("%d", numeroDecimal/2);
        }
        numeroDecimal /=2;

    }

}

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
    printf("%d\n\n", tamanho);

    operacaoBinario(numeroDecimal);


    return 0;
}