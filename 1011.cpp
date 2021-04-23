#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	double pi = 3.14159,R,volume;

	cin>>R;
	volume = (4.0/3)*pi*pow(R,3);


	cout.precision(3);

	cout<<"VOLUME = "<<fixed<<volume<<endl;

	return 0;
}