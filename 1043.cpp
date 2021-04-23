#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	double a,b,c,per,area;
	bool t = false;

	cin>>a>>b>>c;

	if ((abs(b-c)<a && a<b+c) && (abs(a-c)<b && b<a+c) && (abs(a-b)<c && c<a+b))
	{
		t = true;
		per = a+b+c;
	}else{
		t = false;
		area = ((a+b)*c)/2;
	}
	cout.precision(1);
	if (t)
	{
		cout<<fixed<<"Perimetro = "<<per<<endl;
	}else{
		cout<<fixed<<"Area = "<<area<<endl;
	}

	return 0;
}