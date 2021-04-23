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
    bool primeiroCaso = true;
    while (ct != 0)
    {
        cin >> ct;
        if (ct != 0)
        {
            if (primeiroCaso)
            {
                primeiroCaso = false;
            }
            else
            {
                cout << endl;
            }
            cin.ignore();
            int maxLen = 0;
            vector<string> vetFrase;
            for (int i = 0; i < ct; i++)
            {
                string s;
                bool primeiraPalavra = true;
                string palavraVet = "";
                getline(cin, s);
                stringstream ss;
                ss << s;
                while (ss >> s)
                {
                    if (primeiraPalavra)
                    {
                        primeiraPalavra = false;
                    }
                    else
                    {
                        palavraVet += " ";
                    }

                    palavraVet += s;
                }
                vetFrase.push_back(palavraVet);
                if (palavraVet.length() > maxLen)
                {
                    maxLen = palavraVet.length();
                }
            }
            for (int i = 0; i < vetFrase.size(); i++)
            {
                for (int j = 0; j < maxLen - vetFrase[i].length(); j++)
                {
                    cout << " ";
                }

                cout << vetFrase[i] << endl;
            }
        }
    }
}