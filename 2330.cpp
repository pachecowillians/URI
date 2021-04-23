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

typedef struct atendente
{
    int id;
    int livreEm;

    atendente(int id_, int livre_ = 0)
    {
        id = id_;
        livreEm = livre_;
    } //Construtor

    bool operator>(const atendente x) const
    {
        if (livreEm != x.livreEm)
            return livreEm < x.livreEm;
        return id < x.id;
    }

    bool operator<(const atendente x) const
    {
        if (livreEm != x.livreEm)
            return livreEm > x.livreEm;
        return id > x.id;
    }
} Atendente;

int main()
{
    int contAtendentes, contLigacoes;
    priority_queue<Atendente> heap;
    cin >> contAtendentes >> contLigacoes;
    vector<int> vetNumLigacoes(contAtendentes, 0);

    for (int i = 0; i < contAtendentes; i++)
    {
        heap.push(Atendente(i + 1));
    }
    for (int i = 0; i < contLigacoes; i++)
    {
        int tempoLigacao;
        cin >> tempoLigacao;
        Atendente a = heap.top();
        heap.pop();
        a.livreEm += tempoLigacao;
        vetNumLigacoes[a.id - 1]++;
        heap.push(a);
    }
    for (int i = 0; i < contAtendentes; i++)
    {
        cout << i + 1 << " " << vetNumLigacoes[i] << endl;
    }
}