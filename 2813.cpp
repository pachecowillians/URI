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
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ct;
    int gcCasa = 0;
    int gcTrabalho = 0;
    int gcComprarCasa = 0;
    int gcComprarTrabalho = 0;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string idaTrabalho, voltaTrabalho;
        cin >> idaTrabalho >> voltaTrabalho;

        if (idaTrabalho == "chuva" && gcCasa == 0)
        {
            gcComprarCasa++;
            gcTrabalho++;
        }
        else if (idaTrabalho == "chuva" && gcCasa > 0)
        {
            gcCasa--;
            gcTrabalho++;
        }
        if (voltaTrabalho == "chuva" && gcTrabalho == 0)
        {
            gcComprarTrabalho++;
            gcCasa++;
        }
        else if (voltaTrabalho == "chuva" && gcTrabalho > 0)
        {
            gcTrabalho--;
            gcCasa++;
        }
    }

    cout << gcComprarCasa << " " << gcComprarTrabalho << endl;
}