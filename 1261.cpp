#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stack> //pilha
#include <queue> //fila
#include <functional>
#include <tr1/functional> //hash
using namespace std;

typedef struct dicionario
{
    string palavra;
    int valor;
} Dicionario;

int HashString(string s)
{
    std::tr1::hash<string> funcHash;
    return funcHash(s) % 1019;
}

int CalculaValorFrase(Dicionario vetPalavras[], string frase)
{
    int somaValor = 0;
    while (frase.length() > 0)
    {
        string s = frase.substr(0, frase.find(" "));
        frase.erase(0, frase.find(" ") + 1);
        int h = HashString(s);
        while (vetPalavras[h].palavra != "" && vetPalavras[h].palavra != s)
        {
            h++;
            if (h == 1019)
            {
                h = 0;
            }
        }

        if (vetPalavras[h].palavra == s)
        {
            somaValor += vetPalavras[h].valor;
        }
    }
    return somaValor;
}

int main()
{
    int numPalavras, numDescricoes;
    cin >> numPalavras >> numDescricoes;
    Dicionario vetPalavras[1019], d;
    for (int i = 0; i < 1019; i++)
    {
        vetPalavras[i].palavra = "";
        vetPalavras[i].valor = 0;
    }

    for (int i = 0; i < numPalavras; i++)
    {
        cin >> d.palavra >> d.valor;
        int h = HashString(d.palavra);
        while (vetPalavras[h].palavra != "")
        {
            h++;
            if (h == 1019)
            {
                h = 0;
            }
        }
        vetPalavras[h].palavra = d.palavra;
        vetPalavras[h].valor = d.valor;
    }
    for (int i = 0; i < numDescricoes; i++)
    {
        string stringVetor = "", s;
        while (s != ".")
        {
            if (s != ".")
            {
                getline(cin, s);
                stringVetor += s + " ";
            }
        }
        cout << CalculaValorFrase(vetPalavras, stringVetor) << endl;
    }
}