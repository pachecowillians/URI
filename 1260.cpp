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

int main()
{
    int ct;
    cin >> ct;
    cin.ignore();
    string vazia;
    getline(cin, vazia);
    for (int i = 0; i < ct; i++)
    {
        cout << setprecision(4) << fixed;
        string s;
        vector<string> vetString;
        float numStrings = 0;
        while (getline(cin, s) && !s.empty())
        {
            vetString.push_back(s);
            numStrings++;
        }

        make_heap(vetString.begin(), vetString.end());
        sort_heap(vetString.begin(), vetString.end());

        string nome = "";
        int ultimaPosValida = -1;
        float j = 0;
        for (j = 0; j < numStrings; j++)
        {
            if (j == 0)
            {
                nome = vetString[j];
                ultimaPosValida = 0;
            }
            else
            {
                if (vetString[j] != nome)
                {
                    cout << nome << " " << ((j - ultimaPosValida) / numStrings) * 100 << endl;
                    ultimaPosValida = j;
                    nome = vetString[j];
                }
                if (!(j + 1 < numStrings))
                {
                    cout << nome << " " << ((j + 1 - ultimaPosValida) / numStrings) * 100 << endl;
                }
            }
        }
        if (i + 1 < ct)
        {
            cout << endl;
        }
    }
}

/*
real    0m0,183s
user    0m0,061s
sys     0m0,004s
*/

//CÓDIGO PARA EXEMPLO:
//ELE FUNCIONA IGUAL, E GERA AS MESMAS RESPOSTAS, MAS DEU TLE POR PROCESSAMENTOS DESNECESSÁRIOS
//TABELA HASH E HEAP!


/*

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

typedef struct arvore
{
    string nome;
    int quantidade;
} Arvore;

int FuncaoHash(string s)
{
    tr1::hash<string> funcHash;
    return funcHash(s) % 10007;
}

float CalculaPercentual(vector<Arvore> vetHash, string s, float totalElementos)
{
    int h = FuncaoHash(s);
    float percentual = 0;
    while (vetHash[h].nome != s)
    {
        h++;
        if (h == 10007)
        {
            h = 0;
        }
    }
    percentual = (vetHash[h].quantidade / totalElementos) * 100;
    return percentual;
}

int main()
{
    int ct;
    cin >> ct;
    cin.ignore();
    string vazia;
    getline(cin, vazia);
    for (int i = 0; i < ct; i++)
    {
        string s;
        vector<Arvore> vetHash(10007);
        int totalElementos = 0;
        int maiorposicao = -1;
        for (int i = 0; i < 10007; i++)
        {
            vetHash[i].nome = "";
            vetHash[i].quantidade = 0;
        }

        while (getline(cin, s) && !s.empty())
        {
            int h = FuncaoHash(s);
            if (vetHash[h].nome.length() == 0 && vetHash[h].quantidade == 0)
            {
                vetHash[h].nome = s;
                vetHash[h].quantidade++;
            }
            else if (vetHash[h].nome == s)
            {
                vetHash[h].quantidade++;
            }
            else
            {
                while ((vetHash[h].nome.length() != 0 && vetHash[h].nome != s) || vetHash[h].nome.length() != 0)
                {
                    h++;
                    if (h == 10007)
                    {
                        h = 0;
                    }
                }
                if (vetHash[h].nome == s)
                {
                    vetHash[h].quantidade++;
                }
                else
                {
                    vetHash[h].nome = s;
                    vetHash[h].quantidade++;
                }
            }
            if (maiorposicao == -1)
            {
                maiorposicao = h;
            }

            if (h > maiorposicao)
            {
                maiorposicao = h;
            }
            totalElementos++;
        }
        maiorposicao++;

        vector<string> heapString;

        int contDistintos = 0;

        for (int j = 0; j < 10007; j++)
        {
            if (vetHash[j].quantidade > 0)
            {
                heapString.push_back(vetHash[j].nome);
                contDistintos++;
            }
        }

        make_heap(heapString.begin(), heapString.end());
        sort_heap(heapString.begin(), heapString.end());

        cout << setprecision(4) << fixed;

        for (int j = 0; j < contDistintos; j++)
        {
            cout << heapString[j] << " " << CalculaPercentual(vetHash, heapString[j], totalElementos) << endl;
        }

        if (i + 1 < ct)
        {
            cout << endl;
        }
    }
}


real    0m0,448s
user    0m0,444s
sys     0m0,004s

*/