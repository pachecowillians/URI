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

typedef struct no
{
    struct no *filhos[26];
    int numElementos;
    int fim;
} No;

No *CriaNovoNo()
{
    No *p = (No *)malloc(sizeof(No));
    p->numElementos = 0;
    if (p)
    {
        p->fim = 0;
        for (int i = 0; i < 26; i++)
        {
            p->filhos[i] = NULL;
        }
    }
    return p;
}

No *Inicializa()
{
    return CriaNovoNo();
}

int MapearIndice(char c)
{
    char a = (c >= 'a' && c <= 'z') ? (int)'a' : (int)'A';
    return (int)c - (int)a;
}

void Insere(No *raiz, string chave)
{
    int nivel;
    int compr = chave.length();
    int i;
    No *p = raiz;
    for (nivel = 0; nivel < compr; nivel++)
    {
        i = MapearIndice(chave[nivel]);
        if (!p->filhos[i])
        {
            p->filhos[i] = CriaNovoNo();
            (p->numElementos)++;
        }
        p = p->filhos[i];
    }
    p->fim = 1;
    (p->numElementos)++;
}

int ContaNosArvore(No *a, string s)
{
    No *n = NULL;
    int contaNos = 1;
    for (int i = 0; i < s.length(); i++)
    {
        int posicao = s[i] - 'a';
        if (i == 0)
        {
            n = a->filhos[posicao];
        }
        else
        {
            if (n->numElementos > 1)
            {
                contaNos++;
            }
            n = n->filhos[posicao];
        }
    }

    return contaNos;
}

int main()
{
    int ct;
    while (cin >> ct)
    {
        vector<string> v;
        No *a = Inicializa();
        float soma = 0;
        for (int i = 0; i < ct; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
            Insere(a, s);
        }
        for (int i = 0; i < v.size(); i++)
        {
            soma += ContaNosArvore(a, v[i]);
        }
        cout << setprecision(2) << fixed << soma / (float)v.size() << endl;
    }
}