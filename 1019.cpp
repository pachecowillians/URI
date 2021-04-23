#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	int N,thor,tmin,tseg;

	cin>>N;

	thor = N/3600;
	tmin = (N - thor*3600)/60;
	tseg = N - thor*3600 - tmin*60;
	cout<<thor<<":"<<tmin<<":"<<tseg<<endl;

	return 0;
}
