#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    string expressao[10000];
    int k = 0;
    while (cin >> expressao[k])
    {
        k++;
    }
    for (int j = 0; j < k; j++)
    {
        int val = 0;
        int parenteses = 0;
        int errado = 0;
        int ultimoParenteses = 0;
        for (int i = 0; i < expressao[j].length(); i++)
        {
            if (expressao[j][i] == '(')
            {
                val++;
                parenteses = 1;
                ultimoParenteses = 1;
            }
            else if (expressao[j][i] == ')')
            {
                if (parenteses == 0)
                {
                    errado = 1;
                }
                parenteses = 1;
                ultimoParenteses = -1;
                val--;
            }
            if (val < 0)
            {
                errado = 1;
            }
        }
        if (errado == 1 || ultimoParenteses == 1)
        {
            cout << "incorrect" << endl;
        }
        else
        {
            if (val == 0 && parenteses == 1)
            {
                cout << "correct" << endl;
            }
            else if (parenteses == 1)
            {
                cout << "incorrect" << endl;
            }
        }
    }
}