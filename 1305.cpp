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

int Arredonda(string num, string cut)
{
    int pos = num.find(".");
    int parteReal;
    if (pos != -1)
    {
        parteReal = atoi(num.substr(0, pos).c_str());
        num.erase(0, pos + 1);
        cut.erase(0, 2);

        if ((num[0] - '0') > (cut[0] - '0'))
        {
            parteReal++;
        }
        else if ((num[0] - '0') < (cut[0] - '0'))
        {
        }
        else if ((num[1] - '0') > (cut[1] - '0'))
        {
            parteReal++;
        }
        else if ((num[1] - '0') < (cut[1] - '0'))
        {
        }
        else if ((num[2] - '0') > (cut[2] - '0'))
        {
            parteReal++;
        }
        else if ((num[2] - '0') < (cut[2] - '0'))
        {
        }
        else if ((num[3] - '0') > (cut[3] - '0'))
        {
            parteReal++;
        }
        else if ((num[3] - '0') < (cut[3] - '0'))
        {
        }
        else if (num.length() > 4)
        {
            parteReal++;
        }
    }
    else
    {
        parteReal = atoi(num.c_str());
    }

    return parteReal;
}

int main()
{
    string num;
    while (cin >> num)
    {
        string cut;
        cin >> cut;
        cout << Arredonda(num, cut) << endl;
    }
}