#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stack> //pilha
#include <queue> //fila
#include <functional>
#include <tr1/functional> //hash
#include <vector>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
using namespace std;

typedef struct premios
{
    string nome;
    int vetPremios[3];

    bool operator>(const premios p) const
    {
        if (vetPremios[0] != p.vetPremios[0])
        {
            return vetPremios[0] > p.vetPremios[0];
        }
        else if (vetPremios[1] != p.vetPremios[1])
        {
            return vetPremios[1] > p.vetPremios[1];
        }
        else if (vetPremios[2] != p.vetPremios[2])
        {
            return vetPremios[2] > p.vetPremios[2];
        }
        else
        {
            return nome < p.nome;
        }
    }

    bool operator<(const premios p) const
    {
        if (vetPremios[0] != p.vetPremios[0])
        {
            return vetPremios[0] < p.vetPremios[0];
        }
        else if (vetPremios[1] != p.vetPremios[1])
        {
            return vetPremios[1] < p.vetPremios[1];
        }
        else if (vetPremios[2] != p.vetPremios[2])
        {
            return vetPremios[2] < p.vetPremios[2];
        }
        else
        {
            return nome > p.nome;
        }
    }
} Premios;

Premios MakePremios(string nom)
{
    Premios p;
    p.nome = nom;
    p.vetPremios[0] = 0;
    p.vetPremios[1] = 0;
    p.vetPremios[2] = 0;
    return p;
}

struct ordenaString
{
    bool operator()(const string &a, const string b) const
    {
        return a > b;
    }
};

int main()
{
    string nomeProva;
    //priority_queue<string, vector<string>, ordenaString> heap;
    vector<Premios> heap; //Vetor de paises com a colocacao
    map<string, int> m;   //Guarda a posição do vetor daquele pais
    int ultimaPosicaoVetorOcupada = 0;

    while (getline(cin, nomeProva))
    {
        for (int i = 0; i < 3; i++)
        {
            string colocado;
            getline(cin, colocado);
            if (m[colocado] == 0)
            {
                heap.push_back(MakePremios(colocado));
                ultimaPosicaoVetorOcupada++;
                m[colocado] = ultimaPosicaoVetorOcupada;
            }
            heap[m[colocado] - 1].vetPremios[i]++;
        }
    }
    make_heap(heap.begin(), heap.end());
    sort_heap(heap.begin(), heap.end());
    cout << "Quadro de Medalhas" << endl;
    for (int i = 0; heap.size() > 0; i++)
    {
        cout << heap.back().nome;
        for (int i = 0; i < 3; i++)
        {
            cout << " ";
            cout << heap.back().vetPremios[i];
        }
        cout << endl;
        heap.pop_back();
    }

    /*while (!heap.empty())
    {
        cout << heap.back().nome;
        for (int i = 0; i < 3; i++)
        {
            cout << " ";
            cout << m[heap.back().nome].vetPremios[i];
        }
        cout << endl;
        heap.pop_back();
    }*/
}