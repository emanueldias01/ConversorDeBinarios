#include<stdio.h>

void operacaoBinario(int numeroDecimal){
    
    int numBinarioOpc = numeroDecimal;
    int numeroOpc = numeroDecimal;
    int tamanho = 0;
    while (numeroOpc/10 > 0){
        tamanho++;
        numeroOpc /= 10;
        
    }
    tamanho++;
    printf("tamanho: %d\n\n", tamanho);

    int tamanhoVetorBinario = 0;

    while(numeroDecimal/2 >= 1){
        //printf(numeroDecimal%2);
        tamanhoVetorBinario++;
        if(numeroDecimal <= 2){
            //printf("%d", numeroDecimal/2);
            tamanhoVetorBinario++;
        }
        numeroDecimal /=2;

    }
    printf("tamanho do binario: %d\n", tamanhoVetorBinario);



    int vetorBinarioInvertido[tamanhoVetorBinario];
    int contadorIndiceVetor = 0;
    while(numBinarioOpc/2 >=1){
        vetorBinarioInvertido[contadorIndiceVetor] = numBinarioOpc%2;
        contadorIndiceVetor++;
        if(numBinarioOpc <= 2){
            vetorBinarioInvertido[contadorIndiceVetor] = numBinarioOpc/2;
            contadorIndiceVetor++;
        }

        numBinarioOpc /= 2;
    }

    printf("binario invertido: ");

    for(int i = 0; i < contadorIndiceVetor; i++){
        printf("%d", vetorBinarioInvertido[i]);

    }

}

int main(){

    int numeroDecimal;
    printf("Numero decimal a ser convertido: ");
    scanf("%d", &numeroDecimal);


    operacaoBinario(numeroDecimal);


    return 0;
}