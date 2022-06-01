#include <time.h>
#include <stdlib.h>
#include "FuncoesAuxiliares.hpp"

int ordenaParticiona(int A[], int p, int r);
void ordenacao_QuickSort(int A[], int inicio, int fim);

int main()
{
    int A[n];
    srand (time(NULL));

    cout<< "\n\n***** ORDENACAO QUICK SORT *****\n\n";
    cout<< "Vetor de entrada:\n";
    leituraArquivo(A);
    mostraVetor(A);
    cout<< "\n\n";

    clock_t t0 = clock();
    ordenacao_QuickSort(A, 0, n-1);
    clock_t tf = clock();

    cout<< "Vetor de saida:\n";
    mostraVetor(A);
    
    cout<< "\n\nTempo de execucao da ordenacao: " << (double)(tf - t0) / CLOCKS_PER_SEC << "s\n\n";
}

int ordenaParticiona(int A[], int p, int r)
{
    int pivo = A[r], i = p-1;

    for (int j = p; j < r; j++)
    {
        if (A[j] <= pivo)
        {
            i = i + 1;
            troca(A, i, j);
        }
    }

    i = i + 1;
    troca(A, i, r);
    return i;
}

void ordenacao_QuickSort(int A[], int inicio, int fim)
{
    int p;
    if (inicio <= fim)
    {
        p = ordenaParticiona(A, inicio, fim);
        ordenacao_QuickSort(A, inicio, p-1);
        ordenacao_QuickSort(A, p+1, fim);
    }
}