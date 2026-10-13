#include <stdio.h>

#define TAM 10
#define BLOCO 2
#define TAM_INDICE (TAM / BLOCO)

int main(void){

    int v[TAM];
    int indice[TAM_INDICE];
    int inicioBloco[TAM_INDICE];

    int numero;
    int i;
    int bloco = -1;
    int posicao = -1;
    int comparacoes = 0;


    printf("Digite os 10 numeros do vetor: ");
    for(i = 0; i < TAM; i++){
    scanf("%i", &v[i]);
    }

    printf("Digite o valor que deseja encontrar: ");
    scanf ("%i", &numero);

    for ( int i = 0; i < 9; i++) {
        for ( int j = 0; j < 9 - i; j++) {
            if ( v[j] > v[j + 1]) {
                 int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    printf("Vetor ordenado:\n");
    for(i = 0; i < TAM; i++){
        printf("[%i] %i\n", i, v[i]);
    }

    printf("\nIndice auxiliar:\n");
    for(i = 0; i < TAM_INDICE; i++){
        printf("Bloco %i -> %i\n", i, indice[i]);
    }

    for(i = 0; i < TAM_INDICE; i++){
        indice[i] = v[i * BLOCO];
        inicioBloco[i] = i * BLOCO;
    }

    printf("\nBuscando o valor %i...\n\n", numero);

    for(i = 0; i < TAM_INDICE; i++){
        comparacoes++;

        if(i == TAM_INDICE - 1){
            if(numero >= indice[i]){
                bloco = i;
            }
        } else {
            if(numero >= indice[i] && numero < indice[i + 1]){
                bloco = i;
            }
        }

        if(bloco != -1){
            printf("%i esta entre %i e %i -> bloco %i\n\n",
                   numero,
                   indice[i],
                   (i < TAM_INDICE - 1 ? indice[i + 1] : indice[i]),
                   bloco);
            break;
        }
    }

    if(bloco != -1){

        int inicio = inicioBloco[bloco];
        int fim = inicio + BLOCO - 1;

        printf("Buscando dentro do bloco %i:\n", bloco);

        for(i = inicio; i <= fim; i++){
            comparacoes++;

            printf("Posicao %i -> %i ", i, v[i]);

            if(v[i] == numero){
                printf("= encontrado\n");
                posicao = i;
                break;
            } else {
                printf("!= %i\n", numero);
            }
        }
    }

    printf("\nResultado:\n");

    if(posicao != -1){
        printf("Encontrado na posicao [%i]\n", posicao);
    } else {
        printf("Numero nao encontrado\n");
    }

    printf("Total de comparacoes: %i\n", comparacoes);

    return 0;
}