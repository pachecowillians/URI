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
    string s = "";
    int n;
    int contGipe = 0;
    int contPessoas = 0;
    while (s != "ABEND")
    {
        cin >> s >> n;
        if (s != "ABEND")
        {
            if (s == "SALIDA")
            {
                contGipe++;
                contPessoas += n;
            }
            else if (s == "VUELTA")
            {
                contGipe--;
                contPessoas -= n;
            }
        }
    }
    cout << contPessoas << endl;
    cout << contGipe << endl;
}