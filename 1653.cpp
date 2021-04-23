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
#include <bits/stdc++.h>
using namespace std;

typedef struct operacao
{
    string esq, dir, operador;
} Operacao;

Operacao SeparaElementos(string s)
{
    string saidaPilha = s;
    int ultimoParentesesEsquerda = -1;
    Operacao op;
    int contParenteses = 1;
    ultimoParentesesEsquerda = 1;
    while (contParenteses != 0)
    {
        ultimoParentesesEsquerda++;
        if (saidaPilha[ultimoParentesesEsquerda] == '(')
        {
            contParenteses++;
        }
        else if (saidaPilha[ultimoParentesesEsquerda] == ')')
        {
            contParenteses--;
        }
    }
    op.esq = saidaPilha.substr(1, ultimoParentesesEsquerda);
    saidaPilha.erase(0, ultimoParentesesEsquerda + 1);
    op.operador = saidaPilha[0];
    saidaPilha.erase(0, 1);
    op.dir = saidaPilha.substr(0, saidaPilha.length() - 1);
    return op;
}

string ProcessaPilha(string stringEntrada)
{
    string s = stringEntrada;
    stack<string> Pilha;
    while (s.length() > 0)
    {
        if (isupper(s[0]))
        {
            string a, b;

            a = Pilha.top();
            Pilha.pop();
            b = Pilha.top();
            Pilha.pop();

            if (a[0] != '(')
            {
                a = "(" + a + ")";
            }
            if (b[0] != '(')
            {
                b = "(" + b + ")";
            }

            a = "(" + b + s.substr(0, 1) + a + ")";

            s.erase(0, 1);
            Pilha.push(a);
        }
        else
        {
            Pilha.push(s.substr(0, 1));
            s.erase(0, 1);
        }
    }
    string ret = Pilha.top();
    Pilha.pop();
    return ret;
}

string ProcessaFila(string stringEntrada)
{
    string s = stringEntrada;
    queue<string> Fila;
    while (s.length() > 0)
    {
        if (isupper(s[0]))
        {
            string a, b;

            a = Fila.front();
            Fila.pop();
            b = Fila.front();
            Fila.pop();

            if (a[0] != '(')
            {
                a = "(" + a + ")";
            }
            if (b[0] != '(')
            {
                b = "(" + b + ")";
            }

            a = "(" + b + s.substr(0, 1) + a + ")";
            s.erase(0, 1);
            Fila.push(a);
        }
        else
        {
            Fila.push(s.substr(0, 1));
            s.erase(0, 1);
        }
    }
    string ret = Fila.front();
    Fila.pop();
    return ret;
}

string AlteraEquacao(string stringEntrada)
{
    queue<string> fila;
    fila.push(stringEntrada);
    string stringRetorno = "";
    while (!fila.empty())
    {
        string s = fila.front(); //Pega o de cima
        fila.pop();
        if (s.length() == 3)
        {
            s = s[1];
            stringRetorno = s + stringRetorno;
        }
        else
        {
            Operacao o = SeparaElementos(s); //Separa os 3
            stringRetorno = o.operador + stringRetorno;
            fila.push(o.esq);
            fila.push(o.dir);
        }
    }
    return stringRetorno;
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        string pilhaFinal = ProcessaPilha(s);
        SeparaElementos(pilhaFinal);
        s = AlteraEquacao(pilhaFinal);
        cout << s << endl;
    }
}

//Se for minuscula, da push
//Se for maiuscula, da pop em 2 e da push nos 3
//Primeiro cria a pilha com a expressão toda.
//Tira a expressão por () cima e separar os 3 valores
//A expressao da esquerda coloca primeiro por baixo
//A expressao da direita coloca depois por baixo
//O valor do meio vai pro final da expressao final
//Repete o processo até a fila ficar vazia
//Pega o segundo parenteses que abrir (parenteses depois do parenteses mais externo)
//Percorrer até começar a fechar os parenteses e vou guardando a posicao
//Quando um parenteses abrir de novo, já está na direita;
//Pegar do primeiro parenteses que abriu da esquerda, até o ultimo parenteses que fechou da esquerda e essa é a minha expressao da esquerda
//Entre o ultimo parenteses que fechou na esquerda e o primeiro que abriu na direita, tem o operador principal
//Pegar o operador principal e mandar pro final da string de retorno
//Depois vou do primeiro que abre na direita até o ultimo que fecha na direita
//Pra simplificar, posso definir como padrão: O primeiro parenteses que vai abrir na esquerda, vai ser sempre o segundo caracter da expressao; o ultimo parenteses da direita vai estar sempre na penultima posicao da expressao(string)
//TRATAR CASOS SEM PARENTESES (aB(bAc)
//Depois disso, a expressao da esquerda entra primeiro por baixo da fila e a da direita entra depois por baixo da fila
