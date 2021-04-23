#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	int fator = 0,c100 = 0,c50 = 0,c20 = 0,c10 = 0,c5 = 0,c2 = 0,c1 = 0,xInt = 0;
	double N = 0,m50 = 0,m25 = 0,m10 = 0,m5 = 0,m1 = 0;

	cin>>N;

	xInt = (int)N;
	N = N - (int)N;

	fator = xInt;
	c100 = fator/100;
	fator = fator%100;

	c50 = fator/50;
	fator = fator%50;

	c20 = fator/20;
	fator = fator%20;

	c10 = fator/10;
	fator = fator%10;

	c5 = fator/5;
	fator = fator%5;

	c2 = fator/2;
	fator = fator%2;

	c1 = fator/1;
	fator = fator%1;



	fator = (int)(N*100);

	m50 = fator/50;
	fator = fator%50;

	m25 = fator/25;
	fator = fator%25;

	m10 = fator/10;
	fator = fator%10;

	m5 = fator/5;
	fator = fator%5;

	m1 = fator/1;
	fator = fator%1;

	cout<<"NOTAS:"<<endl;
	cout<<c100<<" nota(s) de R$ 100.00"<<endl;
	cout<<c50<<" nota(s) de R$ 50.00"<<endl;
	cout<<c20<<" nota(s) de R$ 20.00"<<endl;
	cout<<c10<<" nota(s) de R$ 10.00"<<endl;
	cout<<c5<<" nota(s) de R$ 5.00"<<endl;
	cout<<c2<<" nota(s) de R$ 2.00"<<endl;
	cout<<"MOEDAS:"<<endl;
	cout<<c1<<" moeda(s) de R$ 1.00"<<endl;
	cout<<m50<<" moeda(s) de R$ 0.50"<<endl;
	cout<<m25<<" moeda(s) de R$ 0.25"<<endl;
	cout<<m10<<" moeda(s) de R$ 0.10"<<endl;
	cout<<m5<<" moeda(s) de R$ 0.05"<<endl;
	cout<<m1<<" moeda(s) de R$ 0.01"<<endl;

	return 0;
}
