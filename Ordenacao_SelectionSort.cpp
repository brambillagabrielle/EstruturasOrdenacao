#include<time.h>
#include "FuncoesAuxiliares.hpp"

void ordenacao_SelectionSort(int A[]);

int main()
{
    int A[n];

    cout<< "\n\n***** ORDENACAO SELECTION SORT *****\n\n";
    cout<< "Vetor de entrada:\n";
    leituraArquivo(A);
    mostraVetor(A);
    cout<< "\n\n";

    clock_t t0 = clock();
    ordenacao_SelectionSort(A);
    clock_t tf = clock();

    cout<< "Vetor de saida:\n";
    mostraVetor(A);
    
    cout<< "\n\nTempo de execucao da ordenacao: " << (double)(tf - t0) / CLOCKS_PER_SEC << "s\n\n";
}

void ordenacao_SelectionSort(int A[])
{
    int menor, aux;
    for (int i = 0; i < n; i++)
    {
        menor = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[menor])
                menor = j;
        }
        troca(A, i, menor);
    }
}