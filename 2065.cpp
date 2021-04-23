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

int PosicaoFuncionarioDemorarMenos(vector<int> vetHoraFuncionarioEsaraDisponivel)
{
    int size = vetHoraFuncionarioEsaraDisponivel.size();
    int menorValor = 0;
    int posicaoMenorValor = -1;
    for (int i = 0; i < size; i++)
    {
        if (i == 0 || vetHoraFuncionarioEsaraDisponivel[i] < menorValor)
        {
            menorValor = vetHoraFuncionarioEsaraDisponivel[i];
            posicaoMenorValor = i;
        }
    }

    return posicaoMenorValor;
}

int main()
{
    int numFuncionarios, numClientes;
    cin >> numFuncionarios >> numClientes;
    vector<int> vetTempoPorItemFuncionarios(numFuncionarios, 0);
    vector<int> vetHoraFuncionarioEsaraDisponivel(numFuncionarios, 0);

    int tempoMaisDemorado = -1;

    for (int i = 0; i < numFuncionarios; i++)
    {
        cin >> vetTempoPorItemFuncionarios[i];
    }
    for (int i = 0; i < numClientes; i++)
    {
        int numItensCliente;
        cin >> numItensCliente;
        int posicaoMenorValor = PosicaoFuncionarioDemorarMenos(vetHoraFuncionarioEsaraDisponivel);
        int novoTempoFuncionario = vetHoraFuncionarioEsaraDisponivel[posicaoMenorValor] + vetTempoPorItemFuncionarios[posicaoMenorValor] * numItensCliente;
        vetHoraFuncionarioEsaraDisponivel[posicaoMenorValor] = novoTempoFuncionario;

        if (novoTempoFuncionario > tempoMaisDemorado)
        {
            tempoMaisDemorado = novoTempoFuncionario;
        }
    }
    cout << tempoMaisDemorado << endl;
}