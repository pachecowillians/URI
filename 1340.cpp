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

    int ct;
    while (cin >> ct)
    {
        stack<int> pilha;
        queue<int> fila;
        priority_queue<int> filaDePrioridades;
        int p = 1, f = 1, fp = 1;
        for (int i = 0; i < ct; i++)
        {
            int operacao, val;
            cin >> operacao >> val;
            if (operacao == 1)
            {
                pilha.push(val);
                fila.push(val);
                filaDePrioridades.push(val);
            }
            else if (operacao == 2)
            {
                int vf, vp, vfp;
                if (p == 1)
                {
                    vp = pilha.top();
                    pilha.pop();
                }
                if (f == 1)
                {
                    vf = fila.front();
                    fila.pop();
                }
                if (fp == 1)
                {
                    vfp = filaDePrioridades.top();
                    filaDePrioridades.pop();
                }
                if (vp != val)
                {
                    p = 0;
                }
                if (vf != val)
                {
                    f = 0;
                }
                if (vfp != val)
                {
                    fp = 0;
                }
            }
        }
        if (f == 1 && p == 0 && fp == 0)
        {
            cout << "queue" << endl;
        }
        else if (f == 0 && p == 1 && fp == 0)
        {
            cout << "stack" << endl;
        }
        else if (f == 0 && p == 0 && fp == 1)
        {
            cout << "priority queue" << endl;
        }
        else if (f + p + fp > 1)
        {
            cout << "not sure" << endl;
        }
        else if (f == 0 && p == 0 && fp == 0)
        {
            cout << "impossible" << endl;
        }
    }
}