#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	double A,B;

	cin>>A;
	cin>>B;

	double MEDIA = (A*3.5 + B*7.5)/11;
	cout.precision(5);

	cout<<"MEDIA = "<<fixed<<MEDIA<<endl;

	return 0;
}