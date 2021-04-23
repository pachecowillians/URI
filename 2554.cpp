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
    int pessoas, datas;
    while (cin >> pessoas >> datas)
    {
        bool jaAchou = false;
        for (int i = 0; i < datas; i++)
        {
            string s;
            cin >> s;
            bool pode = true;
            for (int j = 0; j < pessoas; j++)
            {
                int n;
                cin >> n;
                if (n == 0)
                {
                    pode = false;
                }
            }
            if (pode && !jaAchou)
            {
                cout << s << endl;
                jaAchou = true;
            }
        }
        if (!jaAchou)
        {
            cout << "Pizza antes de FdI" << endl;
        }
    }
}