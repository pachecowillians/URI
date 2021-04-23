#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int ct = 0;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int linha = 0;
        cin >> linha;
        float vetLinhas[linha];
        float soma = 0;
        for (int j = 0; j < linha; j++)
        {
            cin >> vetLinhas[j];
            soma += vetLinhas[j];
        }
        float media = soma / linha;
        float somaAcimaMedia = 0;
        for (int j = 0; j < linha; j++)
        {
            if (vetLinhas[j] > media)
            {
                somaAcimaMedia += 1;
            }
        }
        float percentual = somaAcimaMedia / linha;
        cout << setprecision(3) << fixed;
        cout << percentual * 100 << "%" << endl;
    }
}