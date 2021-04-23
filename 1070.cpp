#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int n;
	cin>>n;
	if (n%2==0)
	{
		n++;
	}
	for (int i = n; i < n+12; i+=2)
	{
		cout<<i<<endl;
	}
}