#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n;
	float n1,n2,n3;
	vector<float> vet;
	cin>>n;
	cout<< fixed;
	cout<< setprecision(1);
	for (int i = 0; i < n; ++i)
	{
		cin>>n1>>n2>>n3;
		vet.push_back((n1*2 + n2*3 + n3*5)/10);
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<vet[i]<<endl;
	}
}