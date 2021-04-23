#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	int N = 0,fator = 0,c100 = 0,c50 = 0,c20 = 0,c10 = 0,c5 = 0,c2 = 0,c1 = 0;

	cin>>N;

	fator = N;
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

	cout<<N<<endl;
	cout<<c100<<" nota(s) de R$ 100,00"<<endl;
	cout<<c50<<" nota(s) de R$ 50,00"<<endl;
	cout<<c20<<" nota(s) de R$ 20,00"<<endl;
	cout<<c10<<" nota(s) de R$ 10,00"<<endl;
	cout<<c5<<" nota(s) de R$ 5,00"<<endl;
	cout<<c2<<" nota(s) de R$ 2,00"<<endl;
	cout<<c1<<" nota(s) de R$ 1,00"<<endl;

	return 0;
}
