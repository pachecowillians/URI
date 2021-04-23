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
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int perigosos;
        vector<string> vPerigosos;
        cin >> perigosos;
        for (int j = 0; j < perigosos; j++)
        {
            string s;
            cin >> s;
            vPerigosos.push_back(s);
        }
        int misturas;
        cin >> misturas;
        for (int j = 0; j < misturas; j++)
        {
            string s;
            bool perigoso = false;
            cin >> s;
            for (int k = 0; k < vPerigosos.size(); k++)
            {
                string p = vPerigosos[k];
                if (p.length() <= s.length())
                {
                    if (s == p || (p.length() < s.length() && s.substr(s.length() - p.length(), p.length()) == p))
                    {
                        perigoso = true;
                    }
                    else if (s.substr(0, p.length()) == p)
                    {
                        if (isalpha(s[p.length()]) && isupper(s[p.length()]))
                        {
                            perigoso = true;
                        }
                    }
                    else if (s.find(p) != s.npos)
                    {
                        if (isalpha(s[s.find(p) + p.length() + 1]) && isupper(s[s.find(p) + p.length() + 1]))
                        {
                            perigoso = true;
                        }
                    }
                }
            }
            if (perigoso)
            {
                cout << "Abortar" << endl;
            }
            else
            {
                cout << "Prossiga" << endl;
            }
        }
        if (i + 1 < ct)
        {
            cout << endl;
        }
    }
}