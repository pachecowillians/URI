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
    unordered_map<string, int> m = {
        {"pedra pedra pedra", 4},
        {"pedra papel papel", 4},
        {"pedra tesoura tesoura", 1},
        {"pedra papel tesoura", 4},
        {"pedra tesoura papel", 4},
        {"pedra pedra papel", 3},
        {"pedra pedra tesoura", 4},
        {"pedra papel pedra", 2},
        {"pedra tesoura pedra", 4},
        {"papel papel papel", 4},
        {"papel pedra pedra", 1},
        {"papel tesoura tesoura", 4},
        {"papel pedra tesoura", 4},
        {"papel tesoura pedra", 4},
        {"papel papel pedra", 4},
        {"papel papel tesoura", 3},
        {"papel pedra papel", 4},
        {"papel tesoura papel", 2},
        {"tesoura tesoura tesoura", 4},
        {"tesoura papel papel", 1},
        {"tesoura pedra pedra", 4},
        {"tesoura papel pedra", 4},
        {"tesoura pedra papel", 4},
        {"tesoura tesoura papel", 4},
        {"tesoura tesoura pedra", 3},
        {"tesoura papel tesoura", 4},
        {"tesoura pedra tesoura", 2}};
    vector<string> v = {
        {"Os atributos dos monstros vao ser inteligencia, sabedoria..."},
        {"Iron Maiden's gonna get you, no matter how far!"},
        {"Urano perdeu algo muito precioso..."},
        {"Putz vei, o Leo ta demorando muito pra jogar..."}};
    string s1, s2, s3;
    while (cin >> s1 >> s2 >> s3)
    {
        string s = s1 + " " + s2 + " " + s3;
        cout << v[m[s] - 1] << endl;
    }
}