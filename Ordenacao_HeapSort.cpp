#include <time.h>
#include <stdlib.h>
#include "FuncoesAuxiliares.hpp"

void constroiArvoreHeap(int A[]);
void ordenacao_HeapSort(int A[]);

int main()
{
    int A[n];
    srand (time(NULL));

    cout<< "\n\n***** ORDENACAO HEAP SORT *****\n\n";
    cout<< "Vetor de entrada:\n";
    leituraArquivo(A);
    mostraVetor(A);
    cout<< "\n\n";

    clock_t t0 = clock();
    ordenacao_HeapSort(A, 0, n-1);
    clock_t tf = clock();

    cout<< "Vetor de saida:\n";
    mostraVetor(A);
    
    cout<< "\n\nTempo de execucao da ordenacao: " << (double)(tf - t0) / CLOCKS_PER_SEC << "s\n\n";
}

/*
entrada e saída na árvore heap possui custo de log n - relacionado à altura da árvore e não o conjunto inteiro
nessa ordenação, o melhor e o pior caso tem o mesmo custo

*/

void constroiArvoreHeap(int A[])
{
    
}

void ordenacao_HeapSort(int A[], int inicio, int fim)
{
    
}