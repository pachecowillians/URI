#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int contPar=0,contImpar=0,contPositivo=0,contNegativo=0, n;
	for (int i = 0; i < 5; ++i)
	{
		cin>>n;
		if(n%2==0){
			contPar++;
		}else{
			contImpar++;
		}
		if(n>0){
			contPositivo++;
		}else if(n<0){
			contNegativo++;
		}

	}
	cout<<contPar<<" valor(es) par(es)"<<endl;
	cout<<contImpar<<" valor(es) impar(es)"<<endl;
	cout<<contPositivo<<" valor(es) positivo(s)"<<endl;
	cout<<contNegativo<<" valor(es) negativo(s)"<<endl;
}
