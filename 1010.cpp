#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	int codigo,codigo2,num,num2;
	double valUnit,valUnit2,total;


	cin>>codigo>>num>>valUnit;
	cin>>codigo2>>num2>>valUnit2;

	total = ((double)num*valUnit) + ((double)num2*valUnit2);

	cout.precision(2);

	cout<<"VALOR A PAGAR: R$ "<<fixed<<total<<endl;

	return 0;
}