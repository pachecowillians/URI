#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

typedef struct arvoreBinaria
{
    char info;
    struct arvoreBinaria *esq;
    struct arvoreBinaria *dir;
    int nivel;
} ArvoreBinaria;

string RemoveEspacos(string s)
{
    int pos = -1;
    while (s.find(" ") != -1)
    {
        pos = s.find(" ");
        s.erase(s.begin() + pos);
    }
    return s;
}

ArvoreBinaria *CriaNo(char infoRaiz)
{
    ArvoreBinaria *a = (ArvoreBinaria *)malloc(sizeof(ArvoreBinaria));
    a->info = infoRaiz;
    a->dir = NULL;
    a->esq = NULL;
    return a;
}

ArvoreBinaria *CriaArvoreDoisPonteiros(ArvoreBinaria *p1, ArvoreBinaria *p2, char operador)
{
    ArvoreBinaria *a = CriaNo(operador);
    a->esq = p1;
    a->dir = p2;
    return a;
}

void ImprimeArvore(ArvoreBinaria *a)
{
    if (a != NULL)
    {
        std::cout << a->info << "( ";
        ImprimeArvore(a->esq);
        ImprimeArvore(a->dir);
        std::cout << ") ";
    }
}

ArvoreBinaria *MontaArvore(string expressao)
{
    ArvoreBinaria *arvoreBase = NULL;
    ArvoreBinaria *arvorePrioritaria = NULL;
    char valorAntesSinal = '_';
    int parenteses = 0;
    while (expressao.length() > 0)
    {
        if (expressao.length() == 1)
        {
            if (isdigit(expressao[0]) || isalpha(expressao[0]))
            {
                if (arvorePrioritaria)
                {
                    if (arvoreBase)
                    {
                        arvorePrioritaria->dir = CriaNo(expressao[0]);
                        arvoreBase->dir = arvorePrioritaria;
                    }
                    else
                    {
                        arvorePrioritaria->dir = CriaNo(expressao[0]);
                        arvoreBase = arvorePrioritaria;
                    }
                }
                else if (arvoreBase)
                {
                    arvoreBase->dir = CriaNo(expressao[0]);
                }
                else
                {
                    arvoreBase = CriaNo(expressao[0]);
                    expressao.erase(0, 1);
                }
            }
            else
            {
                if (arvorePrioritaria)
                {
                    arvoreBase->dir = arvorePrioritaria;
                }
            }
            expressao.erase(0, 1);
        }
        else if (isalpha(expressao[0]) || isdigit(expressao[0]))
        {
            valorAntesSinal = expressao[0];
            expressao.erase(0, 1);
        }
        else if (expressao[0] == '+' || expressao[0] == '-' || expressao[0] == '*' || expressao[0] == '/')
        {
            if (expressao[0] == '*' || expressao[0] == '/')
            {
                if (arvorePrioritaria)
                {
                    if (parenteses != 1)
                    {
                        arvorePrioritaria->dir = CriaNo(valorAntesSinal);
                    }

                    arvorePrioritaria = CriaArvoreDoisPonteiros(arvorePrioritaria, NULL, expressao[0]);
                    expressao.erase(0, 1);
                }
                else
                {
                    if (parenteses == 1)
                    {
                        arvorePrioritaria = CriaArvoreDoisPonteiros(arvoreBase, NULL, expressao[0]);
                        arvoreBase = NULL;
                        parenteses = 0;
                    }
                    else
                    {
                        arvorePrioritaria = CriaArvoreDoisPonteiros(CriaNo(valorAntesSinal), NULL, expressao[0]);
                    }
                    expressao.erase(0, 1);
                }
                if (parenteses == 1)
                {
                    parenteses = 0;
                }
            }
            else // Se é + ou -
            {
                if (arvorePrioritaria)
                {
                    if (arvoreBase)
                    {
                        if (parenteses != 1)
                        {
                            arvorePrioritaria->dir = CriaNo(valorAntesSinal);
                        }

                        arvoreBase->dir = arvorePrioritaria;
                        arvoreBase = CriaArvoreDoisPonteiros(arvoreBase, NULL, expressao[0]);
                        expressao.erase(0, 1);
                    }
                    else
                    {
                        if (parenteses == 1)
                        {
                            arvorePrioritaria = CriaArvoreDoisPonteiros(arvorePrioritaria, NULL, expressao[0]);
                            arvoreBase = arvorePrioritaria;
                            parenteses = 0;
                        }
                        else
                        {
                            arvorePrioritaria->dir = CriaNo(valorAntesSinal);
                            arvoreBase = CriaArvoreDoisPonteiros(arvorePrioritaria, NULL, expressao[0]);
                        }
                        expressao.erase(0, 1);
                    }
                    arvorePrioritaria = NULL;
                }
                else
                {
                    if (arvoreBase)
                    {
                        if (arvoreBase->dir == NULL)
                        {
                            arvoreBase->dir = CriaNo(valorAntesSinal);
                        }

                        arvoreBase = CriaArvoreDoisPonteiros(arvoreBase, NULL, expressao[0]);
                        expressao.erase(0, 1);
                    }
                    else
                    {
                        arvoreBase = CriaArvoreDoisPonteiros(CriaNo(valorAntesSinal), NULL, expressao[0]);
                        expressao.erase(0, 1);
                    }
                }
                if (parenteses == 1)
                {
                    parenteses = 0;
                }
            }
        }
        else if (expressao[0] == '(' || expressao[0] == ')')
        {
            parenteses = 1;
            if (expressao[0] == '(')
            {
                int posicao = -1;
                int equilibrou = 0;
                int i = 0;
                int contEquilibrio = 1;
                while (contEquilibrio != 0)
                {
                    i++;
                    if (expressao[i] == ')')
                    {
                        contEquilibrio--;
                    }
                    if (expressao[i] == '(')
                    {
                        contEquilibrio++;
                    }
                }
                string eqDentroParenteses = expressao.substr(1, i - 1);
                if (arvorePrioritaria)
                {
                    arvorePrioritaria->dir = MontaArvore(eqDentroParenteses);
                }
                else
                {
                    arvorePrioritaria = MontaArvore(eqDentroParenteses);
                }

                expressao.erase(0, i);
            }
            if (expressao[0] == ')')
            {
                expressao.erase(0, 1);
            }
        }
    }

    if (arvoreBase && arvoreBase->dir == NULL)
    {
        arvoreBase->dir = arvorePrioritaria;
    }
    else if (!arvoreBase)
    {
        arvoreBase = arvorePrioritaria;
    }
    arvorePrioritaria = NULL;
    expressao.erase(0, 1);
    return arvoreBase;
}

int CalculaNivel(ArvoreBinaria *raiz, ArvoreBinaria *no)
{
    if (raiz == no)
    {
        return 1;
    }
    if (raiz != no && raiz != NULL)
    {
        int nivelEsquerda = 1 + CalculaNivel(raiz->esq, no);
        int nivelDireita = 1 + CalculaNivel(raiz->dir, no);

        return (nivelEsquerda < nivelDireita) ? nivelEsquerda : nivelDireita;
    }
    if (raiz == NULL)
    {
        return 0;
    }
}

int Height(ArvoreBinaria *a)
{
    if (a != NULL)
    {
        int SomaDireita = 1 + Height(a->dir);
        int SomaEsquerda = 1 + Height(a->esq);
        return (SomaDireita > SomaEsquerda) ? SomaDireita : SomaEsquerda;
    }
}

/* Print nodes at a given level */
void printGivenLevel(ArvoreBinaria *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
    {
        if (root->info != '_')
        {
            cout << root->info;
        }
    }
    else if (level > 1)
    {
        printGivenLevel(root->esq, level - 1);
        printGivenLevel(root->dir, level - 1);
    }
}

/* Function to line by line print level order traversal a tree*/
void printLevelOrder(ArvoreBinaria *root)
{
    int h = Height(root);
    int i;
    for (i = 1; i <= h; i++)
    {
        cout << "Nivel " << i - 1 << ": ";
        printGivenLevel(root, i);
        cout << endl;
    }
}
int main()
{
    string expressao;
    int i = 0;
    while (getline(cin, expressao))
    {
        if (i == 0)
        {
            i = 1;
        }
        else
        {
            cout << endl;
        }
        ArvoreBinaria *arvoreFinal;
        expressao = RemoveEspacos(expressao);
        arvoreFinal = MontaArvore(expressao);
        printLevelOrder(arvoreFinal);
    }
}