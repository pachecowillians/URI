#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	int num,hor;
	double valor;

	cin>>num;
	cin>>hor;
	cin>>valor;

	double salario = hor*valor;

	cout<<"NUMBER = "<<num<<endl;

	cout.precision(2);

	cout<<"SALARY = U$ "<<fixed<<salario<<endl;

	return 0;
}