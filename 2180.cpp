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
    string s;
    string maxLenWord = "";
    while (s != "0")
    {
        getline(cin, s);
        if (s != "0")
        {
            stringstream ss;
            ss << s;
            bool primeira = true;
            while (ss >> s)
            {
                if (primeira)
                {
                    primeira = false;
                }
                else
                {
                    cout << "-";
                }
                if (s.length() >= maxLenWord.length())
                {
                    maxLenWord = s;
                }

                cout << s.length();
            }
            cout << endl;
        }
    }
    cout << endl;
    cout << "The biggest word: " << maxLenWord << endl;
}