#include <stdio.h>

#define TAM 10

int main(void)
{

    int vetor[TAM];
    int tabela[TAM];
    int i, pos, chave;
    int comparacoes = 0;

    for (i = 0; i < TAM; i++)
    {
        tabela[i] = -1;
    }

    printf("Digite os 10 numeros do vetor:\n");
    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor base:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("[%i] %i\n", i, vetor[i]);
    }

    printf("\nMontagem da tabela hash:\n\n");

    for (i = 0; i < TAM; i++)
    {

        chave = vetor[i];
        pos = chave % TAM;

        printf("%i -> %i", chave, pos);

        while (tabela[pos] != -1)
        {
            printf(" (colisao na posicao %i)", pos);
            pos = (pos + 1) % TAM;
        }

        tabela[pos] = chave;
        printf(" -> armazenado na posicao %i\n", pos);
    }

    printf("\nTabela hash final:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("Posicao %i -> %i\n", i, tabela[i]);
    }

    printf("Digite o numero que procura: ");
    scanf("%i", &chave);
    pos = chave % TAM;

    printf("\nBusca do valor %i:\n", chave);
    printf("h(%i) = %i mod %i = %i\n", chave, chave, TAM, pos);

    while (tabela[pos] != -1)
    {
        comparacoes++;

        printf("Posicao %i -> %i", pos, tabela[pos]);

        if (tabela[pos] == chave)
        {
            printf(" = encontrado\n");
            break;
        }
        else
        {
            printf(" != %i\n", chave);
            pos = (pos + 1) % TAM;
        }
    }

    printf("\nResultado:\n");
    if (tabela[pos] == chave)
    {
        printf("Encontrado na posicao [%i]\n", pos);
    }
    else
    {
        printf("Numero nao encontrado\n");
    }

    printf("Total de comparacoes: %i\n", comparacoes);

    return 0;
}