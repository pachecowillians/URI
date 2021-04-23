#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int numCasas = 0;
    cin >> numCasas;

    int vetCasas[numCasas];
    int somaCasas = 0;
    int c1 = -1, c2 = -1;

    for (int i = 0; i < numCasas; i++)
    {
        cin >> vetCasas[i];
    }

    cin >> somaCasas;

    int i = 0;
    int j = numCasas-1;
    while (i < j && (c1 == -1 || c2 == -1))
    {
        if (vetCasas[i] + vetCasas[j] == somaCasas)
        {
            c1 = i;
            c2 = j;
        }
        else if (vetCasas[i] + vetCasas[j] > somaCasas)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<vetCasas[c1]<<" "<<vetCasas[c2]<<endl;
}