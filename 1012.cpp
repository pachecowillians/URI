#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	double A,B,C;

	cin>>A>>B>>C;
	cout.precision(3);

	cout<<"TRIANGULO: "<<fixed<<(A*C)/2<<endl;
	cout<<"CIRCULO: "<<fixed<<3.14159*pow(C,2)<<endl;
	cout<<"TRAPEZIO: "<<fixed<<(A+B)*C/2<<endl;
	cout<<"QUADRADO: "<<fixed<<pow(B,2)<<endl;
	cout<<"RETANGULO: "<<fixed<<(A*B)<<endl;

	return 0;
}