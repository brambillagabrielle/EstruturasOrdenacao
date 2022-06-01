#include<iostream>
#include<fstream>
using namespace std;

/*
    Arquivos disponiveis:
        Desordenados aleatoriamente:
            10     - "Arquivos/Arquivos desordenados aleatoriamente/arqDez.txt"
            100    - "Arquivos/Arquivos desordenados aleatoriamente/arqCem.txt"
            1000   - "Arquivos/Arquivos desordenados aleatoriamente/arqMil.txt"
            10000  - "Arquivos/Arquivos desordenados aleatoriamente/arqDezMil.txt"
            100000 - "Arquivos/Arquivos desordenados aleatoriamente/arqCemMil.txt"
        Ordenados (crescente):
            10000  - "Arquivos/Arquivos desordenados aleatoriamente/arqDezMil_ORDENADO.txt"
            100000 - "Arquivos/Arquivos desordenados aleatoriamente/arqCemMil_ORDENADO.txt"
*/

#define n 100
#define arq "Arquivos/Arquivos desordenados aleatoriamente/arqCem.txt"

void troca(int A[], int pos1, int pos2)
{
    int aux;
    aux = A[pos1];
    A[pos1] = A[pos2];
    A[pos2] = aux;
}

void mostraVetor(int A[])
{
    for (int i = 0; i < n; i++)
        cout<< A[i] << " ";
}

void leituraArquivo(int A[])
{
    ifstream leitura;
    int i, val;

    leitura.open(arq, ios::in);

    i = 0;
    while (leitura >> val)
    {
        A[i] = val;
        i++;
    }

    leitura.close();
}