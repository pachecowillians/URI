#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

long long int *CriaVetorFibonacci()
{
    long long int *vetF = (long long int *)malloc(61 * sizeof(long long int));
    vetF[0] = 0;
    vetF[1] = 1;
    vetF[2] = 1;
    for (int i = 3; i < 61; i++)
    {
        vetF[i] = vetF[i - 1] + vetF[i - 2];
    }
    return vetF;
}

int main()
{
    int ct;
    cin >> ct;
    int vet[ct];
    long long int *vf = CriaVetorFibonacci();
    for (int i = 0; i < ct; i++)
    {
        cin>>vet[i];
    }
    for (int i = 0; i < ct; i++)
    {
        cout<<"Fib("<<vet[i]<<") = "<<vf[vet[i]]<<endl;
    }
    
}