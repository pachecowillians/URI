#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stack> //pilha
#include <queue> //fila
#include <functional>
#include <tr1/functional> //hash
using namespace std;

int main()
{
    int vetHash[1000000];
    int ct, n;
    int maxVal = 0;
    int contPresenca = 0;
    cin >> ct;
    for (int i = 0; i < 1000000; i++)
    {
        vetHash[i] = -1;
    }

    for (int i = 0; i < ct; i++)
    {
        cin >> n;
        vetHash[n] = 1;
        if (n > maxVal)
        {
            maxVal = n;
        }
    }
    for (int i = 0; i < maxVal + 1; i++)
    {
        if (vetHash[i] != -1)
        {
            contPresenca++;
        }
    }
    cout << contPresenca << endl;
}