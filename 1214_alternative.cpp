#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

float CalculaMedia(float *vet, float tam)
{
    float soma;
    for (int i = 0; i < tam; i++)
    {
        soma += vet[i];
    }
    return floor(soma / tam);
}

int main()
{
    int linhas = 0;
    int colunas = 0;
    float media = 0;
    float somaAcimaMedia = 0;

    cin >> linhas;
    float *vetLinhas[linhas];
    float vetAcimaMedia[linhas];

    for (int i = 0; i < linhas; i++)
    {
        vetLinhas[i] = NULL;
    }
    for (int i = 0; i < linhas; i++)
    {
        cin >> colunas;
        vetLinhas[i] = (float *)malloc(colunas * sizeof(float));

        for (int j = 0; j < colunas; j++)
        {
            cin >> media;
            vetLinhas[i][j] = media;
        }
        media = CalculaMedia(vetLinhas[i], colunas);
        if (colunas == 1)
        {
            vetAcimaMedia[i] = 100;
        }
        else
        {
            for (int j = 0; j < colunas; j++)
            {
                if (vetLinhas[i][j] > media)
                {
                    somaAcimaMedia++;
                }
            }
            vetAcimaMedia[i] = (somaAcimaMedia / colunas) * 100.000;
        }
        somaAcimaMedia = 0;
    }
    for (int i = 0; i < linhas; i++)
    {
        cout << setprecision(3) << fixed;
        cout << vetAcimaMedia[i] << "%" << endl;
    }
}