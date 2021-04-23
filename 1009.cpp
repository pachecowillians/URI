#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	string nome;
	double salario,vendas;


	cin>>nome;
	cin>>salario;
	cin>>vendas;

	salario = salario + vendas*0.15;

	cout.precision(2);

	cout<<"TOTAL = R$ "<<fixed<<salario<<endl;

	return 0;
}