#include<time.h>
#include "FuncoesAuxiliares.hpp"

void ordenacao_InsertionSort(int A[]);

int main()
{
    int A[n];

    cout<< "\n\n***** ORDENACAO INSERTION SORT *****\n\n";
    cout<< "Vetor de entrada:\n";
    leituraArquivo(A);
    mostraVetor(A);
    cout<< "\n\n";

    clock_t t0 = clock();
    ordenacao_InsertionSort(A);
    clock_t tf = clock();

    cout<< "Vetor de saida:\n";
    mostraVetor(A);
    
    cout<< "\n\nTempo de execucao da ordenacao: " << (double)(tf - t0) / CLOCKS_PER_SEC << "s\n\n";
}

void ordenacao_InsertionSort(int A[])
{
    int chave, aux, j;
    for (int i = 1; i < n; i++)
    {
        chave = A[i];
        j = i - 1;
        while (j > -1 && A[j] > chave)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = chave;
    }
}