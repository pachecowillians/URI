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
#include <unordered_map>
#include <map>
#include <set>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int n = 1;
    while (n != 0)
    {
        cin >> n;
        int soma = 0;
        if (n != 0)
        {
            if (n % 2 != 0)
            {
                n++;
            }

            for (int i = 0; i < 5; i++)
            {
                soma += n;
                n += 2;
            }
            cout << soma << endl;
        }
    }
}