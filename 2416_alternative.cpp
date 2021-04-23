#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

int MenorTempo(int tempoCorrida[], int tamanho)
{
    int menor = INT32_MAX;
    int posicaoMenor = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (tempoCorrida[i] < menor && tempoCorrida[i] >= 0)
        {
            menor = tempoCorrida[i];
            posicaoMenor = i;
        }
    }
    tempoCorrida[posicaoMenor] = -1;
    return posicaoMenor;
}

int main()
{
    int ct = 0;
    int corridas = 0;
    cin >> ct >> corridas;
    int vetTempoCorrida[ct];
    for (int i = 0; i < ct; i++)
    {
        vetTempoCorrida[i] = 0;
        for (int j = 0; j < corridas; j++)
        {
            int tempo;
            cin >> tempo;
            vetTempoCorrida[i] += tempo;
        }
    }
    int primeiro = 1 + MenorTempo(vetTempoCorrida, ct);
    int segundo = 1 + MenorTempo(vetTempoCorrida, ct);
    int terceiro = 1 + MenorTempo(vetTempoCorrida, ct);
    cout<<primeiro<<endl<<segundo<<endl<<terceiro<<endl;
}