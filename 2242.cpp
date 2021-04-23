#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int contVogais = 0;
    char s1[s.length()];
    int boa = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            s1[contVogais] = s[i];
            contVogais++;
        }
    }
    contVogais = 0;
    int igual = 1;
    for (int i = s.length() - 1; i >= 0 && igual == 1; i--)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            if (s[i] == s1[contVogais])
            {
                contVogais++;
                igual = 1;
            }
            else
            {
                igual = 0;
            }
        }
    }
    if (igual == 1)
    {
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    
}