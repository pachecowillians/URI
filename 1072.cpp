#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int n, val, in=0, out=0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>val;
		if (val>=10 && val<=20)
		{
			in++;
		}else{
			out++;
		}
	}
	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;
}