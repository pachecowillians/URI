#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n, max = -1, pos = -1;

	cout<< fixed;
	cout<< setprecision(1);
	
	for (int i = 0; i < 100; ++i)
	{
		cin>>n;
		if (n>max)
		{
			max = n;
			pos = i+1;
		}
	}
	cout<<max<<endl;
	cout<<pos<<endl;
}