#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

int VerificaPrimo(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int linhas;
    cin >> linhas;
    int vetLinhas[linhas];
    for (int i = 0; i < linhas; i++)
    {
        cin >> vetLinhas[i];
        if (VerificaPrimo(vetLinhas[i]) == 1)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
    }
}