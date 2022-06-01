#include <time.h>
#include "FuncoesAuxiliares.hpp"

void leituraArquivo(int A[]);
void ordenacao_BubbleSort_1(int A[]);
void ordenacao_BubbleSort_2(int A[]);
void ordenacao_BubbleSort_3(int A[]);

int main()
{
    int A[n];

    cout<< "\n\n***** ORDENACAO BUBBLE SORT *****\n\n";
    cout<< "Vetor de entrada:\n";
    leituraArquivo(A);
    mostraVetor(A);
    cout<< "\n\n";

    clock_t t0 = clock();
    ordenacao_BubbleSort_1(A);
    clock_t tf = clock();

    cout<< "Vetor de saida:\n";
    mostraVetor(A);
    
    cout<< "\n\nTempo de execucao da ordenacao: " << (double)(tf - t0) / CLOCKS_PER_SEC << "s\n\n";
}

// todos possuem a mesma complexidade

void ordenacao_BubbleSort_1(int A[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i] < A[j])
                troca(A, i, j);
        }
    }
}

void ordenacao_BubbleSort_2(int A[])
{
    bool trocas;
    do
    {
        trocas = false;
        for (int i = 0; i <= n-2; i++)
        {
            if (A[i] > A[i+1])
            {
                troca(A, i, i+1);
                trocas = true;
            }
        }
    } while (trocas);
}

void ordenacao_BubbleSort_3(int A[])
{
    bool trocas = true;
    while (trocas)
    {
        trocas = false;
        for (int i = 0; i <= n-2; i++)
        {
            if (A[i] > A[i+1])
            {
                troca(A, i, i+1);
                trocas = true;
            }
        }
    }
}
