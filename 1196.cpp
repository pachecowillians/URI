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
    unordered_map<char, char> m{
        {'1', '`'},
        {'2', '1'},
        {'3', '2'},
        {'4', '3'},
        {'5', '4'},
        {'6', '5'},
        {'7', '6'},
        {'8', '7'},
        {'9', '8'},
        {'0', '9'},
        {'-', '0'},
        {'=', '-'},
        {'W', 'Q'},
        {'E', 'W'},
        {'R', 'E'},
        {'T', 'R'},
        {'Y', 'T'},
        {'U', 'Y'},
        {'I', 'U'},
        {'O', 'I'},
        {'P', 'O'},
        {'[', 'P'},
        {']', '['},
        {'\\', ']'},
        {'S', 'A'},
        {'D', 'S'},
        {'F', 'D'},
        {'G', 'F'},
        {'H', 'G'},
        {'J', 'H'},
        {'K', 'J'},
        {'L', 'K'},
        {';', 'L'},
        {'\'', ';'},
        {'X', 'Z'},
        {'C', 'X'},
        {'V', 'C'},
        {'B', 'V'},
        {'N', 'B'},
        {'M', 'N'},
        {',', 'M'},
        {'.', ','},
        {'/', '.'}};

    while (getline(cin, s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                cout << m[s[i]];
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}