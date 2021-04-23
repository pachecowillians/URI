#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	int n = 0,a = 0,m = 0,d = 0,fator = 0;

	cin>>n;

	a = n/365;
	fator = n%365;

	m = fator/30;
	fator = fator%30;

	d = fator;

	cout<<a<<" ano(s)"<<endl;
	cout<<m<<" mes(es)"<<endl;
	cout<<d<<" dia(s)"<<endl;

	return 0;
}
