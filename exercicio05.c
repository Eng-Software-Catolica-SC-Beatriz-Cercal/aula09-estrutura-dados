#include <stdio.h>

#define TAM 10

int buscaBinaria (int v[], int inicio, int fim, int numero, int *chamadas){
    (*chamadas)++;

    if (inicio > fim){
        return -1;
    }

    int meio = (inicio + fim) / 2;
     
    if (v[meio] == numero){
        return meio;
    }

    if (numero < v[meio]){
        return buscaBinaria(v, inicio, meio - 1, numero, chamadas);
    }
    return buscaBinaria(v, meio + 1, fim, numero, chamadas);

}

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

    int chamadas = 0;
    posicao =  buscaBinaria(v, 0, TAM - 1, numero, &chamadas);

    printf("\nResultado:\n");

    if(posicao != -1){
        printf("Encontrado na posicao [%i]\n", posicao);
    } else {
        printf("Numero nao encontrado\n");
    }

    printf("Total de chamadas: %i\n", chamadas);

    return 0;
}