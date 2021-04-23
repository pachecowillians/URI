#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stack> //pilha
#include <queue> //fila
#include <functional>
#include <tr1/functional> //hash
#include <vector>
using namespace std;

typedef struct cliente
{
    int horaChegou;
    int demoraCaixa;
    int horaAtendido;
    int tempoEspera;
} Cliente;

int CaixaEntrar(int CaixaDisponivelEm[], int caixas)
{
    int posMenor = -1, menor;
    for (int i = 0; i < caixas; i++)
    {
        if (i == 0)
        {
            menor = CaixaDisponivelEm[i];
            posMenor = i;
        }
        if (CaixaDisponivelEm[i] < menor)
        {
            menor = CaixaDisponivelEm[i];
            posMenor = i;
        }
    }
    return posMenor;
}

main()
{
    int caixas, clientes;
    cin >> caixas >> clientes;
    Cliente c;

    int CaixaDisponivelEm[caixas];
    for (int i = 0; i < caixas; i++)
    {
        CaixaDisponivelEm[i] = 0;
    }

    int contAcima = 0;

    for (int i = 0; i < clientes; i++)
    {
        cin >> c.horaChegou >> c.demoraCaixa;

        int posCaixaDemorarMenos = CaixaEntrar(CaixaDisponivelEm, caixas);

        if (CaixaDisponivelEm[posCaixaDemorarMenos] < c.horaChegou)
        {
            c.horaAtendido = c.horaChegou;
            CaixaDisponivelEm[posCaixaDemorarMenos] = c.horaChegou + c.demoraCaixa;
        }
        else
        {
            c.horaAtendido = CaixaDisponivelEm[posCaixaDemorarMenos];
            CaixaDisponivelEm[posCaixaDemorarMenos] += c.demoraCaixa;
        }

        c.tempoEspera = c.horaAtendido - c.horaChegou;

        if (c.tempoEspera > 20)
        {
            contAcima++;
        }
    }
    cout << contAcima << endl;
}