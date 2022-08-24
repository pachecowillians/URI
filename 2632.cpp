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

typedef struct magic
{
    int damage;
    int levelsRadius[3];
} Magic;

float degreesToRadians(float degrees)
{
    return degrees * (M_PI / 180);
}

bool pointInRectangle(float px, float py, float rx, float ry, float w, float h)
{
    if (px >= rx && px <= rx + w && py >= ry && py <= ry + h)
    {
        return true;
    }
    else
    {
        return false;
    }
}

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

bool damage(float unityX, float unityY, float unityW, float unityH, float magicX, float magicY, float magicR)
{
    bool inside = false;

    if (pointInRectangle(magicX, magicY, unityX, unityY, unityW, unityH))
    {
        return true;
    }

    for (int i = unityX; i <= unityX + unityW; i++)
    {
        if (distance(i, unityY, magicX, magicY) <= magicR)
        {
            return true;
        }
    }

    for (int i = unityX; i <= unityX + unityW; i++)
    {
        if (distance(i, unityY + unityH, magicX, magicY) <= magicR)
        {
            return true;
        }
    }

    for (int i = unityY; i <= unityY + unityH; i++)
    {
        if (distance(unityX, i, magicX, magicY) <= magicR)
        {
            return true;
        }
    }

    for (int i = unityY; i <= unityY + unityH; i++)
    {
        if (distance(unityX + unityW, i, magicX, magicY) <= magicR)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    float ct, w, h, x0, y0;

    string magia;

    float cx, cy;
    int n;

    cin >> ct;

    Magic fire, water, earth, air;

    fire.damage = 200;
    fire.levelsRadius[0] = 20;
    fire.levelsRadius[1] = 30;
    fire.levelsRadius[2] = 50;

    water.damage = 300;
    water.levelsRadius[0] = 10;
    water.levelsRadius[1] = 25;
    water.levelsRadius[2] = 40;

    earth.damage = 400;
    earth.levelsRadius[0] = 25;
    earth.levelsRadius[1] = 55;
    earth.levelsRadius[2] = 70;

    air.damage = 100;
    air.levelsRadius[0] = 18;
    air.levelsRadius[1] = 38;
    air.levelsRadius[2] = 60;

    for (int i = 0; i < ct; i++)
    {
        float r, d;
        cin >> w >> h >> x0 >> y0;
        cin >> magia >> n >> cx >> cy;
        if (magia == "fire")
        {
            r = fire.levelsRadius[n - 1];
            d = fire.damage;
        }
        else if (magia == "water")
        {
            r = water.levelsRadius[n - 1];
            d = water.damage;
        }
        else if (magia == "earth")
        {
            r = earth.levelsRadius[n - 1];
            d = earth.damage;
        }
        else
        {
            r = air.levelsRadius[n - 1];
            d = air.damage;
        }
        if (damage(x0, y0, w, h, cx, cy, r))
        {
            cout << d << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}