#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	int X;
	double Y;

	cin>>X>>Y;

	cout.precision(3);
	cout<<fixed<<X/Y<<" km/l"<<endl;

	return 0;
}