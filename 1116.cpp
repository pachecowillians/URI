#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

typedef struct dVal{
	float n1,n2;
}dVal;
int main(){
	int i=0,n;
	dVal v;
	vector<dVal> vet;
	cin>>n;
	cout<< fixed;
	cout<< setprecision(1);
	for (int i = 0; i < n; ++i)
	{
		cin>>v.n1>>v.n2;
		vet.push_back(v);
	}
	for (int j = 0; j < n; ++j)
	{
		if (vet[j].n2 == 0)
		{
			cout<<"divisao impossivel"<<endl;
		}else if(vet[j].n1 == 0){
			cout<<"0.0"<<endl;
		}else{
			cout<<vet[j].n1/vet[j].n2<<endl;
		}
	}
}
