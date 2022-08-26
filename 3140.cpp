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

    bool body = false;
    while (getline(cin, s))
    {
        if (s.find("</body>") != s.npos)
        {
            body = false;
        }
        if (body)
        {
            cout << s << endl;
        }
        if (s.find("<body>") != s.npos)
        {
            body = true;
        }
    }

    return 0;
}