#include<stdio.h>

void operacaoBinario(int numeroDecimal){
    
    int numBinarioOpc = numeroDecimal;
    int numeroOpc = numeroDecimal;

    int tamanhoVetorBinario = 0;

    while(numeroDecimal/2 >= 1){
        tamanhoVetorBinario++;

        if(numeroDecimal <= 2){
            tamanhoVetorBinario++;

        }
        numeroDecimal /=2;

    }


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

    printf("\nEm binario: ");

    int binario[contadorIndiceVetor];
    int contadorIndice = 0;


    //transferindo para o outro vetor de maneira invertida
    for(int i = contadorIndiceVetor; i>=0; i--){
        binario[i-1] = vetorBinarioInvertido[contadorIndice];
        contadorIndice++;
    }

    //printando resultado
    for(int i = 0; i < contadorIndiceVetor; i++){
        printf("%d", binario[i]);

    }

}

int main(){

    int numeroDecimal;
    printf("Numero decimal a ser convertido: ");
    scanf("%d", &numeroDecimal);


    operacaoBinario(numeroDecimal);


    return 0;
}