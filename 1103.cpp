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
    int ho = 1, mo = 1, hf = 1, mf = 1;
    while (ho != 0 || mo != 0 || hf != 0 || mf != 0)
    {
        cin >> ho >> mo >> hf >> mf;
        if (ho != 0 || mo != 0 || hf != 0 || mf != 0)
        {
            int m_i = ho * 60 + mo;
            int m_f;
            if (hf > ho)
            {
                m_f = hf * 60 + mf;
            }
            else if (hf == ho && mf < mo)
            {
                m_f = (hf + 24) * 60 + mf;
            }
            else if (hf == ho && mf >= mo)
            {
                m_f = hf * 60 + mf;
            }
            else
            {
                m_f = (hf + 24) * 60 + mf;
            }

            cout << m_f - m_i << endl;
        }
    }
}