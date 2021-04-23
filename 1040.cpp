#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	double x,y,z,w,m;

	cin>>x>>y>>z>>w;

	m = (x*2 + y*3 + z*4 + w*1)/10;

	cout.precision(1);

	if (m>=7)
	{
		cout<<fixed<<"Media: "<<m<<endl;
		cout<<"Aluno aprovado."<<endl;
	}else if (m>=5 && m<6.9)
	{
		cout<<fixed<<"Media: "<<m<<endl;

		cout<<"Aluno em exame."<<endl;

		cin>>x;

		cout<<fixed<<"Nota do exame: "<<x<<endl;

		m = (m + x)/2;

		if (m>=5)
		{
			cout<<"Aluno aprovado."<<endl;
			cout<<fixed<<"Media final: "<<m<<endl;
		}else{
			cout<<"Aluno reprovado."<<endl;
			cout<<fixed<<"Media final: "<<m<<endl;
		}
	}else{
		cout<<fixed<<"Media: "<<m<<endl;
		
		cout<<"Aluno reprovado."<<endl;
	}


	return 0;
}