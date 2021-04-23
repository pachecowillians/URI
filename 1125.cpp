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
    int g, p;
    while (g != 0 || p != 0)
    {
        cin >> g >> p;
        if (g != 0 && p != 0)
        {
            int matGPilotos[g][101];
            for (int i = 0; i < g; i++)
            {
                for (int j = 0; j < 101; j++)
                {
                    matGPilotos[i][j] = 0;
                }
            }

            for (int i = 0; i < g; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    int pos;
                    cin >> pos;
                    matGPilotos[i][pos] = j + 1; //Numero do piloto daquela colocação
                }
            }
            int numSistemasPontuacao, numPilotosPremiados;
            cin >> numSistemasPontuacao;
            for (int i = 0; i < numSistemasPontuacao; i++)
            {
                cin >> numPilotosPremiados;
                vector<int> vetPontosPilotos(101, 0);
                for (int j = 0; j < numPilotosPremiados; j++)
                {
                    int pontuacaoColocado;
                    cin >> pontuacaoColocado;

                    for (int k = 0; k < g; k++)
                    {
                        vetPontosPilotos[matGPilotos[k][j + 1]] += pontuacaoColocado;
                    }
                }
                vector<int> ganhadores;
                for (int j = 0; j < 101; j++)
                {
                    if (vetPontosPilotos[j] != 0)
                    {

                        if (ganhadores.size() == 0)
                        {
                            ganhadores.push_back(j);
                        }
                        else if (vetPontosPilotos[ganhadores.front()] < vetPontosPilotos[j])
                        {
                            while (!ganhadores.empty())
                            {
                                ganhadores.pop_back();
                            }
                            ganhadores.push_back(j);
                        }
                        else if (vetPontosPilotos[ganhadores.front()] == vetPontosPilotos[j])
                        {
                            ganhadores.push_back(j);
                        }
                    }
                }

                for (int j = 0; j < ganhadores.size(); j++)
                {
                    cout << ganhadores[j];
                    if (j + 1 < ganhadores.size())
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }
    }
}