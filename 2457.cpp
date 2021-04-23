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

using namespace std;

int VerificaLetra(string palavra, char letra)
{
    while (palavra.length() > 0)
    {
        if (palavra[0] == letra)
        {
            return 1;
        }
        palavra.erase(0, 1);
    }
    return 0;
}

float SeparaFraseEmPalavras(string s, char l)
{
    float contPalavras = 0;
    float contPalavrasComLetra = 0;
    while (s.length() > 0)
    {
        int posEspaco = s.find(" ");
        string palavra;
        if (posEspaco == -1)
        {
            palavra = s;
        }
        else
        {
            palavra = s.substr(0, posEspaco);
        }

        contPalavrasComLetra += VerificaLetra(palavra, l);
        contPalavras++;
        if (posEspaco != -1)
        {
            s.erase(0, posEspaco + 1);
        }
        else
        {
            s.erase(0, s.length());
        }
    }
    return 100 * (contPalavrasComLetra / contPalavras);
}

int main()
{
    char c;
    string s = "";
    cin >> c;
    cin.ignore();
    std::getline(std::cin >> std::ws, s);
    cout << setprecision(1) << fixed;
    cout << SeparaFraseEmPalavras(s, c) << endl;
}