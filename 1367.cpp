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
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int ct = 1;
    while (ct != 0)
    {
        cin >> ct;
        if (ct != 0)
        {
            unordered_map<char, int> mapContIncorrect;
            vector<pair<char, int>> vetCorrects;
            for (int i = 0; i < ct; i++)
            {
                char questao;
                int tempo;
                string avaliacao;
                cin >> questao >> tempo >> avaliacao;
                if (avaliacao == "incorrect")
                {
                    mapContIncorrect[questao]++;
                }
                else if (avaliacao == "correct")
                {
                    vetCorrects.push_back(make_pair(questao, tempo));
                }
            }
            int soma = 0;
            for (int i = 0; i < vetCorrects.size(); i++)
            {
                soma += vetCorrects[i].second + mapContIncorrect[vetCorrects[i].first] * 20;
            }

            cout << vetCorrects.size() << " " << soma << endl;
        }
    }
}