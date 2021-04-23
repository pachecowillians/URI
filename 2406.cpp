#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stack> //pilha
#include <queue> //fila
#include <functional>
#include <tr1/functional> //hash
using namespace std;

int VerificaBemDefinida(string s)
{
    stack<int> pilhaParenteses;
    stack<int> pilhaChaves;
    stack<int> pilhaColchetes;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            pilhaParenteses.push(1);
        }
        else if (s[i] == ')')
        {
            if (pilhaParenteses.empty())
            {
                return 0;
            }
            else if (s[i - 1] == '[' || s[i - 1] == '{')
            {
                return 0;
            }
            else
            {
                pilhaParenteses.pop();
            }
        }
        else if (s[i] == '[')
        {
            pilhaColchetes.push(1);
        }
        else if (s[i] == ']')
        {
            if (pilhaColchetes.empty())
            {
                return 0;
            }
            else if (s[i - 1] == '(' || s[i - 1] == '{')
            {
                return 0;
            }
            else
            {
                pilhaColchetes.pop();
            }
        }
        else if (s[i] == '{')
        {
            pilhaChaves.push(1);
        }
        else if (s[i] == '}')
        {
            if (pilhaChaves.empty())
            {
                return 0;
            }
            else if (s[i - 1] == '[' || s[i - 1] == '(')
            {
                return 0;
            }
            else
            {
                pilhaChaves.pop();
            }
        }
    }
    if (pilhaChaves.empty() && pilhaParenteses.empty() && pilhaColchetes.empty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        if (VerificaBemDefinida(s) == 1)
        {
            cout << "S" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
}