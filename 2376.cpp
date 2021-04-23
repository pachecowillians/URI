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
    vector<char> vetOitavasFinal(8, 0);
    vector<char> vetQuartasFinal(4, 0);
    vector<char> vetSemiFinais(2, 0);
    pair<int, int> jogo;
    cin >> jogo.first >> jogo.second; //Jogo 1
    if (jogo.first > jogo.second)
    {
        vetOitavasFinal[0] = 'A';
    }
    else
    {
        vetOitavasFinal[0] = 'B';
    }
    cin >> jogo.first >> jogo.second; //Jogo 2
    if (jogo.first > jogo.second)
    {
        vetOitavasFinal[1] = 'C';
    }
    else
    {
        vetOitavasFinal[1] = 'D';
    }
    cin >> jogo.first >> jogo.second; //Jogo 3
    if (jogo.first > jogo.second)
    {
        vetOitavasFinal[2] = 'E';
    }
    else
    {
        vetOitavasFinal[2] = 'F';
    }
    cin >> jogo.first >> jogo.second; //Jogo 4
    if (jogo.first > jogo.second)
    {
        vetOitavasFinal[3] = 'G';
    }
    else
    {
        vetOitavasFinal[3] = 'H';
    }
    cin >> jogo.first >> jogo.second; //Jogo 5
    if (jogo.first > jogo.second)
    {
        vetOitavasFinal[4] = 'I';
    }
    else
    {
        vetOitavasFinal[4] = 'J';
    }
    cin >> jogo.first >> jogo.second; //Jogo 6
    if (jogo.first > jogo.second)
    {
        vetOitavasFinal[5] = 'K';
    }
    else
    {
        vetOitavasFinal[5] = 'L';
    }
    cin >> jogo.first >> jogo.second; //Jogo 7
    if (jogo.first > jogo.second)
    {
        vetOitavasFinal[6] = 'M';
    }
    else
    {
        vetOitavasFinal[6] = 'N';
    }
    cin >> jogo.first >> jogo.second; //Jogo 8
    if (jogo.first > jogo.second)
    {
        vetOitavasFinal[7] = 'O';
    }
    else
    {
        vetOitavasFinal[7] = 'P';
    }

    //-------------Quartas de final ----------

    cin >> jogo.first >> jogo.second; //Jogo 9
    if (jogo.first > jogo.second)
    {
        vetQuartasFinal[0] = vetOitavasFinal[0];
    }
    else
    {
        vetQuartasFinal[0] = vetOitavasFinal[1];
    }
    cin >> jogo.first >> jogo.second; //Jogo 10
    if (jogo.first > jogo.second)
    {
        vetQuartasFinal[1] = vetOitavasFinal[2];
    }
    else
    {
        vetQuartasFinal[1] = vetOitavasFinal[3];
    }
    cin >> jogo.first >> jogo.second; //Jogo 11
    if (jogo.first > jogo.second)
    {
        vetQuartasFinal[2] = vetOitavasFinal[4];
    }
    else
    {
        vetQuartasFinal[2] = vetOitavasFinal[5];
    }
    cin >> jogo.first >> jogo.second; //Jogo 12
    if (jogo.first > jogo.second)
    {
        vetQuartasFinal[3] = vetOitavasFinal[6];
    }
    else
    {
        vetQuartasFinal[3] = vetOitavasFinal[7];
    }

    //---------------Semifinais------------

    cin >> jogo.first >> jogo.second; //Jogo 13
    if (jogo.first > jogo.second)
    {
        vetSemiFinais[0] = vetQuartasFinal[0];
    }
    else
    {
        vetSemiFinais[0] = vetQuartasFinal[1];
    }

    cin >> jogo.first >> jogo.second; //Jogo 14
    if (jogo.first > jogo.second)
    {
        vetSemiFinais[1] = vetQuartasFinal[2];
    }
    else
    {
        vetSemiFinais[1] = vetQuartasFinal[3];
    }

    //---------------Final----------------

    cin >> jogo.first >> jogo.second; //Jogo 15
    if (jogo.first > jogo.second)
    {
        cout << vetSemiFinais[0] << endl;
    }
    else
    {
        cout << vetSemiFinais[1] << endl;
    }
}