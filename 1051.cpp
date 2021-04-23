#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){
	float salario, ir, p1,p2,p3;
	cin>>salario;
	std::cout.precision(2);
	cout<<std::fixed;

	if (salario>0 && salario <=2000)
	{
		cout<<"Isento"<<endl;
	}else if (salario>2000 && salario <=3000)
	{
		ir = (salario-2000)*0.08;
		cout<<"R$ "<<ir<<endl;
	}else if (salario>3000 && salario <=4500)
	{
		ir = (salario-3000)*0.18 + 80;
		cout<<"R$ "<<ir<<endl;
	}else if (salario>4500)
	{
		ir = (salario-4500)*0.28 + 80 + 270;
		cout<<"R$ "<<ir<<endl;
	}
}