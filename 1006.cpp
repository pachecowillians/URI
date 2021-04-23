#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	double A,B,C;

	cin>>A;
	cin>>B;
	cin>>C;

	double MEDIA = (A*2 + B*3 + C*5)/10;
	cout.precision(1);

	cout<<"MEDIA = "<<fixed<<MEDIA<<endl;

	return 0;
}