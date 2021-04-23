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
    int ct = 1;
    while (ct != 0)
    {
        cin >> ct;
        if (ct != 0)
        {
            int j = 0, m = 0;
            for (int i = 0; i < ct; i++)
            {
                int n;
                cin >> n;
                if (n == 0)
                {
                    m++;
                }
                else
                {
                    j++;
                }
            }
            cout << "Mary won " << m << " times and John won " << j << " times" << endl;
        }
    }
}