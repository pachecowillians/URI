#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<< fixed;
	cout<< setprecision(0);
	for (int i = 1; i <= 10000; ++i)
	{
		if (i%n==2)
		{
			cout<<i<<endl;
		}
	}
}