#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int ct1, ct2, valCarta;
    int CartasAlice[100001];
    int CartasBeatriz[100001];
    int MaiorValor = -1;
    for (int i = 0; i < 100001; i++)
    {
        CartasAlice[i] = 0;
        CartasBeatriz[i] = 0;
    }

    int somaAlice = 0;
    int somaBeatriz = 0;

    do
    {
        cin >> ct1 >> ct2;
        if (ct1 != 0 || ct2 != 0)
        {
            MaiorValor = -1;
            somaAlice = 0;
            somaBeatriz = 0;
            for (int i = 0; i < ct1; i++)
            {
                cin >> valCarta;
                (CartasAlice[valCarta])++;
                if (valCarta > MaiorValor)
                {
                    MaiorValor = valCarta;
                }
            }
            for (int i = 0; i < ct2; i++)
            {
                cin >> valCarta;
                (CartasBeatriz[valCarta])++;
                if (valCarta > MaiorValor)
                {
                    MaiorValor = valCarta;
                }
            }
            for (int i = 0; i <= MaiorValor; i++)
            {
                if (CartasBeatriz[i] != 0 && CartasAlice[i] != 0)
                {
                    CartasAlice[i] = 0;
                    CartasBeatriz[i] = 0;
                }
                else
                {
                    if (CartasBeatriz[i] != 0)
                    {
                        somaBeatriz++;
                    }
                    else if(CartasAlice[i] != 0)
                    {
                        somaAlice++;
                    }
                }
            }
            if (somaAlice < somaBeatriz)
            {
                cout << somaAlice << endl;
            }
            else
            {
                cout << somaBeatriz << endl;
            }
            for (int i = 0; i <= MaiorValor; i++)
            {
                CartasAlice[i] = 0;
                CartasBeatriz[i] = 0;
            }
        }
    } while (ct1 != 0 || ct2 != 0);
}