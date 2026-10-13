#include <stdio.h>

#define TAM 1000

int main(void)
{

    int v[TAM];
    int i;
    int valores[3] = {0, 999, 1000};
    int buscas = 3;

    for (i = 0; i < TAM; i++)
    {
        v[i] = i;
    }

    for (int b = 0; b < buscas; b++)
    {
        int numero = valores[b];
        int comparacoes = 0;
        int encontrado = 0;

        printf("\nBuscando o valor %i\n", numero);

        for (i = 0; i < TAM; i++)
        {
            comparacoes++;
            if (v[i] == numero)
            {
                printf("Encontrado na posicao %d\n", i);
                encontrado = 1;
                break;
            }
        }

        if (!encontrado)
        {
            printf("Numero não encontrado\n");
        }
        printf("Total de comparacoes: %d\n", comparacoes);
    }

    return 0;
}
