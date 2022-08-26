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

typedef struct point
{
    int x, y, z;
} Point;

long double distance(Point p0, Point p1)
{
    return sqrt(pow(p1.x - p0.x, 2) + pow(p1.y - p0.y, 2) + pow(p1.z - p0.z, 2));
}

int main()
{
    int numberPoints;
    cin >> numberPoints;
    Point points[numberPoints];

    for (int i = 0; i < numberPoints; i++)
    {
        cin >> points[i].x >> points[i].y >> points[i].z;
    }
    for (int i = 0; i < numberPoints; i++)
    {
        long double d = DBL_MAX;
        for (int j = 0; j < numberPoints; j++)
        {
            if (j != i && distance(points[i], points[j]) < d)
            {
                d = distance(points[i], points[j]);
            }
        }
        if (d <= 20)
        {
            cout << "A" << endl;
        }
        else if (d <= 50)
        {
            cout << "M" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }

    return 0;
}