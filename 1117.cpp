#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){
	int cont=0,n=0,nc=0;
	float soma=0,v;
	cout<< fixed;
	cout<< setprecision(2);
	do
	{
		cout<<"novo calculo (1-sim 2-nao)"<<endl;
		do
		{
			cin>>v;
			if (v>=0 && v<=10)
			{
				cont++;
				soma+=v;
			}else{
				n++;
			}
		} while (cont<2);
		for (int i = 0; i < n; ++i)
		{
			cout<<"nota invalida"<<endl;
		}
		cout<<"media = "<<soma/2<<endl;
	} while (/* condition */);
}