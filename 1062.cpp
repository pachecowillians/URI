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

int VerificaSaida(vector<int> vetSaida, int numVagoes)
{
    stack<int> pilha;
    vector<int> vetEntrada;
    for (int i = 0; i < numVagoes; i++)
    {
        vetEntrada.insert(vetEntrada.begin(), i + 1);
    }

    for (int i = 0; i < numVagoes; i++)
    {
        int proximoValorASair = vetSaida.back();
        vetSaida.pop_back();

        if (pilha.empty())
        {
            do
            {
                pilha.push(vetEntrada.back());
                vetEntrada.pop_back();
            } while (pilha.top() != proximoValorASair);
            pilha.pop();
        }
        else
        {
            if (pilha.top() == proximoValorASair)
            {
                pilha.pop();
            }
            else if (proximoValorASair < pilha.top())
            {
                return 0;
            }
            else if (proximoValorASair > pilha.top())
            {
                do
                {
                    pilha.push(vetEntrada.back());
                    vetEntrada.pop_back();
                } while (pilha.top() != proximoValorASair);
                pilha.pop();
            }
        }
    }
    return 1;
}

int main()
{
    int numVagoes;
    do
    {
        cin >> numVagoes;

        if (numVagoes != 0)
        {
            int primeiroVagao = 1;
            do
            {
                cin >> primeiroVagao;
                if (primeiroVagao != 0)
                {

                    vector<int> vetSaida;
                    vetSaida.insert(vetSaida.begin(), primeiroVagao);
                    for (int i = 1; i < numVagoes; i++)
                    {
                        int n;
                        cin >> n;
                        vetSaida.insert(vetSaida.begin(), n);
                    }
                    int resultado = VerificaSaida(vetSaida, numVagoes);
                    if (resultado == 1)
                    {
                        cout << "Yes" << endl;
                    }
                    else
                    {
                        cout << "No" << endl;
                    }
                }

            } while (primeiroVagao != 0);
            cout << endl;
        }

    } while (numVagoes != 0);
}

//Primeiro empilha at?? o primeiro valor, depois tira ele
//Se o proximo valor a ser retirado for o da cabeca da pilha, tira o da cabeca
//Se o valor for menor que o da cabeca da pilha, est?? errado
//Se o valor for maior que o da cabeca, empilha at?? chegar nele
//N??o precisa se preocupar em empilhar e n??o ter mais valores para empilhar
//Prmeiro verifica se a pilha n??o est?? vazia, depois verifica se a cabe??a ?? maior, menor ou igual
//Se a pilha estiver vazia, empilhar at?? o valor (pois ele n??o foi empilhado ainda)
//Criar uma fun????o q recebe os valores da saida
//Valores iniciais: Vetor com os numeros de 1 a N, sendo o 1 o primeiro elemento a ser retirado para a pilha; uma pilha vazia e um vetor com os valores da sa??da
//Desenvolver a l??gica dentro da fun????o
//Se a pilha estiver vazia, empilha at?? o valor e retira a cabe??a; Se n??o estiver vazia, verifica se a cabe??a ?? igual, se for, ent??o retira; Se for menor, retorna que est?? errado; Se for maior, empilhar at?? o valor, e retira a cabe??a