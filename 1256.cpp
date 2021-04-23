#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stack> //pilha
#include <queue> //fila
#include <functional>
#include <tr1/functional> //hash
using namespace std;

typedef struct listaEncadeada
{
    int info;
    struct listaEncadeada *prox;
} ListaEncadeada;

ListaEncadeada *CriaNo(int val)
{
    ListaEncadeada *n = (ListaEncadeada *)malloc(sizeof(ListaEncadeada));
    n->info = val;
    n->prox = NULL;
    return n;
}

void InsereVetor(ListaEncadeada *vetHash[], int pos, ListaEncadeada *noInserido)
{
    ListaEncadeada *n = vetHash[pos];
    if (n->prox == NULL)
    {
        n->prox = noInserido;
    }
    else
    {
        while (n->prox != NULL)
        {
            n = n->prox;
        }
        n->prox = noInserido;
    }
}

int FuncaoHash(int val, int primoHash)
{
    return val % primoHash;
}

void ImprimeLista(ListaEncadeada *l)
{
    if (l != NULL)
    {
        cout << l->info << " -> ";
        ListaEncadeada *n = l->prox;
        while (n != NULL)
        {
            cout << n->info << " -> ";
            n = n->prox;
        }
    }

    cout << "\\" << endl;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int primoHash;
        int chaves;
        int n;
        cin >> primoHash >> chaves;
        ListaEncadeada *vetHash[primoHash];
        for (int j = 0; j < primoHash; j++)
        {
            vetHash[j] = NULL;
        }

        for (int j = 0; j < chaves; j++)
        {
            cin >> n;
            int h = FuncaoHash(n, primoHash);
            if (vetHash[h] != 0)
            {
                InsereVetor(vetHash, h, CriaNo(n));
            }
            else
            {
                vetHash[h] = CriaNo(n);
            }
        }

        for (int j = 0; j < primoHash; j++)
        {
            cout << j << " -> ";
            ImprimeLista(vetHash[j]);
        }
        if (i + 1 < ct)
        {
            cout << endl;
        }
    }
}