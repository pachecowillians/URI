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
using namespace std;

int main()
{
    int ct;
    cin >> ct;
    cin.ignore();
    for (int k = 0; k < ct; k++)
    {
        string s;
        unordered_map<char, int> m;
        unordered_map<char, bool> mapInVector;
        vector<char> v;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
            {
                s[i] = tolower(s[i]);
                if (i == 0)
                {
                    v.push_back(s[i]);
                    mapInVector[s[i]] = true;
                }
                else
                {
                    if (!v.empty() && m[s[i]] == m[v.front()])
                    {
                        while (!v.empty())
                        {
                            mapInVector[v.back()] = false;
                            v.pop_back();
                        }
                        v.push_back(s[i]);
                        mapInVector[s[i]] = true;
                    }
                    else if (!v.empty() && m[s[i]] + 1 == m[v.front()])
                    {
                        if (mapInVector[s[i]] == false)
                        {
                            v.push_back(s[i]);
                            mapInVector[s[i]] = true;
                        }
                    }
                    else if (v.empty())
                    {
                        v.push_back(s[i]);
                        mapInVector[s[i]] = true;
                    }
                }
            }
            m[s[i]]++;
        }
        if (!v.empty())
        {
            make_heap(v.begin(), v.end());
            sort_heap(v.begin(), v.end());
        }

        for (int j = 0; j < v.size(); j++)
        {
            cout << v[j];
        }
        cout << endl;
    }
}