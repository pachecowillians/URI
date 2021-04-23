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
    int ans, n, t;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
            break;
        ans = (n * (n + 1)) * (2 * n + 1);
        t = ans / 6;
        printf("%d\n", t);
    }
}