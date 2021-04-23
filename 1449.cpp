#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <string>
#include <functional>
#include <tr1/functional>
using namespace std;

typedef struct dicionario
{
    string palavra;
    string traducao;
} Dicionario;

int FuncaoHash(string s)
{
    std::tr1::hash<string> hash_fn;
    int h = hash_fn(s) %797;
    return h;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int numPalavra;
        int numFrase;
        cin >> numPalavra >> numFrase;
        Dicionario dic[10000];
        int hash = 0;
        for (int j = 0; j < numPalavra; j++)
        {
            string p;
            cin >> p;
            hash = FuncaoHash(p);
            dic[hash].palavra = p;
            cin.ignore();
            getline(cin, dic[hash].traducao);
        }
        for (int j = 0; j < numFrase; j++)
        {
            string frase;
            getline(cin, frase);
            int contPalavras = 0;

            int pos;
            int l = 0;
            string vetPalavrasFrase[8000];
            while (frase.find(" ") != -1)
            {
                pos = frase.find(" ");
                vetPalavrasFrase[l] = frase.substr(0, pos);
                frase = frase.substr(pos + 1);
                l++;
            }
            string s = frase.substr(0, frase.length());
            vetPalavrasFrase[l] = s;
            contPalavras = l;

            for (int k = 0; k <= contPalavras; k++)
            {
                int hash = FuncaoHash(vetPalavrasFrase[k]);
                if (dic[hash].palavra == vetPalavrasFrase[k])
                {
                    cout << dic[hash].traducao;
                }
                else
                {
                    cout << vetPalavrasFrase[k];
                }
                if (k + 1 <= contPalavras)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}