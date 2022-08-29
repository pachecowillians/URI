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
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int acertos1 = 0;
        int acertos2 = 0;
        int positionError1 = -1;
        int positionError2 = -1;

        string original, t1, t2;
        if (i == 0)
        {
            cin.ignore();
        }
        getline(cin, original);
        getline(cin, t1);
        getline(cin, t2);

        cout << "Instancia " << i + 1 << endl;

        if (t1 == t2)
        {
            cout << "empate" << endl;
        }
        else
        {
            for (int i = 0; i < original.length(); i++)
            {
                if (i < t1.length())
                {
                    if (t1[i] == original[i])
                    {

                        acertos1 += 1;
                    }
                    else
                    {
                        if (positionError1 == -1)
                        {

                            positionError1 = i;
                        }
                    }
                }

                if (i < t2.length())
                {
                    if (t2[i] == original[i])
                    {

                        acertos2 += 1;
                    }
                    else
                    {
                        if (positionError2 == -1)
                        {

                            positionError2 = i;
                        }
                    }
                }
                if (positionError2 == positionError1)
                {
                    positionError1 = -1;
                    positionError2 = -1;
                }
            }

            if (acertos1 > acertos2)
                cout << "time 1" << endl;
            else if (acertos1 < acertos2)
                cout << "time 2" << endl;
            else
            {
                if (positionError1 < positionError2)
                    cout << "time 2" << endl;
                else if (positionError2 < positionError1)
                    cout << "time 1" << endl;
                else
                    cout << "empate" << endl;
            }
        }
        cout << endl;
    }

    return 0;
}
