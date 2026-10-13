#include <stdio.h>

#define TAM 10

int main(void){

    int v[TAM];
    int numero;
    int i, j, aux;

    int inicio = 0;
    int fim = TAM - 1;
    int meio;
    int posicao = -1;
    int comparacoes = 0;

    printf("Digite os 10 numeros do vetor: ");
    for(int i = 0; i < TAM; i++){
    scanf("%i", &v[i]);
    }

    printf("Digite o valor que deseja encontrar: ");
    scanf ("%i", &numero);

    for ( i = 0; i < 9; i++) {
        for ( j = 0; j < 9 - i; j++) {
            if ( v[j] > v[j + 1]) {
                 aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    printf("Vetor ordenado:\n");
    for(int i = 0; i < TAM; i++){
        printf("[%i] %i\n", i, v[i]);
    }

    printf("\nBuscando o valor %i...\n\n", numero);

    while(inicio <= fim){

        meio = (inicio + fim) / 2;
        comparacoes++;

        printf("Inicio = %i | Fim = %i | Meio = %i -> Valor = %i\n",
               inicio, fim, meio, v[meio]);

        if(v[meio] == numero){
            printf("Valor encontrado\n");
            posicao = meio;
            break;
        } else {
            if(numero < v[meio]){
                printf("%i < %i -> busca na metade esquerda\n\n",
                       numero, v[meio]);
                fim = meio - 1;
            } else {
                printf("%i > %i -> busca na metade direita\n\n",
                       numero, v[meio]);
                inicio = meio + 1;
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