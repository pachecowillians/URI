#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){
	float salario;
	int reajuste;
	std::cout.precision(2);
	cin>>salario;

	if (salario>0 && salario<=400)
	{
		reajuste = 15;
	}
	if (salario>400 && salario<=800)
	{
		reajuste = 12;
	}
	if (salario>800 && salario<=1200)
	{
		reajuste = 10;
	}
	if (salario>1200 && salario<=2000)
	{
		reajuste = 7;
	}
	if (salario>2000)
	{
		reajuste = 4;
	}	

	cout<<"Novo salario: " <<std::fixed<< salario * (100+reajuste)/100<<endl; 
	cout<<"Reajuste ganho: " << salario * reajuste/100<<endl; 
	cout<<"Em percentual: " << reajuste  << " %"<<endl; 
}
