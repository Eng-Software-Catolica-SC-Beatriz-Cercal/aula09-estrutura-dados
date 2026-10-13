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

        printf("Buscando o valor %i\n", numero);

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

        int inicio = 0;
        int fim = TAM - 1;
        int comparacoesBinaria = 0;

        while (inicio <= fim)
        {
            int meio = (inicio + fim) / 2;
            comparacoesBinaria++;

            if (v[meio] == numero)
            {
                break;
            }
            else if (numero < v[meio])
            {
                fim = meio - 1;
            }
            else
            {
                inicio = meio + 1;
            }
        }

        printf("Comparacoes — sequencial: %d | binaria: %d\n",
               comparacoes, comparacoesBinaria);

        if (!encontrado)
        {
            printf("Numero não encontrado\n");
        }
    }

    return 0;
}
