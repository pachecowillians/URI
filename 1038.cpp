#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int x;
	float qtd,p = 0,t;

	cin>>x>>qtd;

	if (x==1)
	{
		p = 4.00; 
	}else if (x==2)
	{
		p = 4.50; 
	}else if (x==3)
	{
		p = 5.00; 
	}else if (x==4)
	{
		p = 2.00; 
	}else if (x==5)
	{
		p = 1.50; 
	}

	t = qtd*p;

	cout.precision(2);

	cout<<fixed<<"Total: R$ "<<t<<endl;

	return 0;
}