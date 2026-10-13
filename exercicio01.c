#include <stdio.h>

#define TAM 10

int main(void){

    int v[TAM];
    int numero;
    int i;
    int posicao = -1;
    int comparacoes = 0;


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
            posicao = i;
            break;
        } else {
            printf("!= %i\n", numero);
        }
    }

    printf("Resultado:\n");

    if(posicao != -1){
        printf("Encontrado na posicao [%i]\n", posicao);
    } else {
        printf("Numero nao encontrado\n");
    }

    printf("Total de comparacoes: %i\n", comparacoes);

    return 0;
}

