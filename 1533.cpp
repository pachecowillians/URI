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
            int ms = -1;
            int sms = -1;
            int pms = -1;
            int psms = -1;
            for (int i = 0; i < ct; i++)
            {
                int n;
                cin >> n;
                if (n > ms)
                {
                    sms = ms;
                    ms = n;
                    psms = pms;
                    pms = i;
                }
                else if (n > sms)
                {
                    sms = n;
                    psms = i;
                }
            }
            cout << psms + 1 << endl;
        }
    }
}