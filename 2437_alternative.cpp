#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){
	int xm,ym,xr,yr;
	int res;
	cin>>xm>>ym>>xr>>yr;


	res = sqrt(pow(xr,2)+pow(xm,2)) + sqrt(pow(yr,2)+pow(ym,2));

	cout << res << endl; 
}