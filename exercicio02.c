//2. Altere a busca sequencial para que ela não pare na primeira ocorrência. 
//O programa lê 10 números inteiros, pergunta o valor procurado e 
//mostra todas as posições em que ele aparece, a quantidade total 
//de ocorrências e o número de comparações. 

#include <stdio.h>

#define TAM 10

int main(void){

    int v[TAM];
    int numero;
    int i;
    int ocorrencias = 0;
    int comparacoes = 0;
    int posicoes[TAM];


    printf("Digite os 10 numeros do vetor: ");
    for(i = 0; i < TAM; i++){
    scanf("%i", &v[i]);
    }

    printf("Digite o valor que deseja encontrar: ");
    scanf ("%i", &numero);


    printf("\nBuscando o valor %i...\n", numero);

    for(i = 0; i < TAM; i++){
        comparacoes++;

        printf("Posicao %i -> %i ", i, v[i]);

        if(v[i] == numero){
            printf("= encontrado\n");
            posicoes[ocorrencias] = i;
            ocorrencias++;
        } else {
            printf("!= %i\n", numero);
        }
    }

    printf("Resultado:\n");

    if(ocorrencias > 0){
        printf("Encontrado em [%i] posicoes\n", ocorrencias);
    
        for (i = 0; i < ocorrencias; i++){
            printf("%d", posicoes[i]);
        }

    }else{
        printf("Numero não encontrado.");
    }
    printf ("\nTotal de comparacoes: %i\n", comparacoes);

    return 0;
}


