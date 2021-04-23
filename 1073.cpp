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
	if (n%2==0)
	{
		n++;
	}
	for (int i = 2; i < n; i+=2)
	{
		cout<<i<<"^2 = "<<pow(i,2)<<endl;
	}
}