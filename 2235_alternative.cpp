#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){
	int max, a, b, aux;

	cin>>max>>a>>b;

	if (max<a)
	{
		aux = max;
		max = a;
		a = aux;
	}

	if (max<b)
	{
		aux = max;
		max = b;
		b = aux;
	}

	if (max <= a+b)
	{
		cout<<"S";
	}else{
		cout<<"N";
	}
}