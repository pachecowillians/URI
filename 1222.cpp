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
#include <stdlib.h>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int numPlavras;
    while (cin >> numPlavras)
    {
        int numLinhasPagina, numCaracteresLinha;
        int contCaracteresLinha = 0, contlinhas = 0;
        cin >> numLinhasPagina >> numCaracteresLinha;
        for (int i = 0; i < numPlavras; i++)
        {
            string s;
            cin >> s;
            if (contCaracteresLinha + s.length() <= numCaracteresLinha)
            {
                contCaracteresLinha += s.length();
            }
            else
            {
                contCaracteresLinha = s.length();
                contlinhas++;
            }
            contCaracteresLinha++;
        }
        int numPaginas = floor((contlinhas + 1) / numLinhasPagina);
        if (((contlinhas + 1) % numLinhasPagina) != 0)
        {
            numPaginas++;
        }

        cout << numPaginas << endl;
    }
}

//Tenho o limite de caracteres por linha
//Tenho o limite de linhas por pagina
//Achar a quantidade de paginas