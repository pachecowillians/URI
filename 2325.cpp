#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stack>
#include <queue>
#include <functional>
#include <tr1/functional>
using namespace std;

typedef struct programa
{
    long long int cod;
    long long int versaoInstalada;
    long long int versaoAtualizada;
} Programa;

int FuncaoHash(long long int val)
{
    std::tr1::hash<long long int> hash_fn;
    int h = hash_fn(val) % 12011;
    return h;
}

Programa RetornaMenorValor(Programa vetHash[12011], int *tamVet)
{
    int maiorPosicao = -1;
    int posicaoRemovido = -1;
    Programa pRetorno;
    pRetorno.cod = 0;
    pRetorno.versaoInstalada = 0;
    pRetorno.versaoAtualizada = 0;

    for (int i = 0; i < *tamVet; i++)
    {
        if (vetHash[i].versaoAtualizada != 0)
        {
            if (pRetorno.cod == 0)
            {
                posicaoRemovido = i;
                maiorPosicao = i;
                pRetorno.cod = vetHash[i].cod;
                pRetorno.versaoInstalada = vetHash[i].versaoInstalada;
                pRetorno.versaoAtualizada = vetHash[i].versaoAtualizada;
            }
            else if (vetHash[i].cod < pRetorno.cod)
            {
                posicaoRemovido = i;
                maiorPosicao = i;
                pRetorno.cod = vetHash[i].cod;
                pRetorno.versaoInstalada = vetHash[i].versaoInstalada;
                pRetorno.versaoAtualizada = vetHash[i].versaoAtualizada;
            }
            maiorPosicao = i + 1;
        }
    }

    *tamVet = maiorPosicao;

    if (posicaoRemovido != -1)
    {
        vetHash[posicaoRemovido].cod = 0;
        vetHash[posicaoRemovido].versaoInstalada = 0;
        vetHash[posicaoRemovido].versaoAtualizada = 0;
    }

    return pRetorno;
}

//12011

int main()
{
    int ctInstalados, ctDisponiveis;
    cin >> ctInstalados >> ctDisponiveis;
    Programa p, vetHash[12011];
    for (int i = 0; i < 12011; i++)
    {
        vetHash[i].cod = 0;
        vetHash[i].versaoInstalada = 0;
        vetHash[i].versaoAtualizada = 0;
    }

    for (int i = 0; i < ctInstalados; i++)
    {
        cin >> p.cod >> p.versaoInstalada;
        int h = FuncaoHash(p.cod);
        do
        {
            if (vetHash[h].cod != 0)
            {
                h++;
            }
            if (h == 12011)
            {
                h = 0;
            }
        } while (vetHash[h].cod != 0);

        vetHash[h].cod = p.cod;
        vetHash[h].versaoInstalada = p.versaoInstalada;
    }
    for (int i = 0; i < ctDisponiveis; i++)
    {
        cin >> p.cod >> p.versaoAtualizada;
        int h = FuncaoHash(p.cod);
        do
        {
            if (vetHash[h].cod != p.cod)
            {
                h++;
            }
            if (h == 12011)
            {
                h = 0;
            }
        } while (vetHash[h].cod != p.cod && vetHash[h].cod != 0);

        vetHash[h].cod = p.cod;
        if (vetHash[h].versaoInstalada < p.versaoAtualizada && vetHash[h].versaoAtualizada < p.versaoAtualizada)
        {
            vetHash[h].versaoAtualizada = p.versaoAtualizada;
        }
    }

    int maiorPosicao;
    maiorPosicao = 12011;
    Programa vetAtualizacoesOrdenado[ctDisponiveis];
    for (int i = 0; i < ctDisponiveis; i++)
    {
        vetAtualizacoesOrdenado[i] = RetornaMenorValor(vetHash, &maiorPosicao);
    }

    for (int i = 0; i < ctDisponiveis; i++)
    {
        if (vetAtualizacoesOrdenado[i].versaoAtualizada != 0)
        {
            cout << vetAtualizacoesOrdenado[i].cod << " " << vetAtualizacoesOrdenado[i].versaoAtualizada << endl;
        }
    }
}