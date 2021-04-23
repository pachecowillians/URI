#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

typedef struct dVal{
	int n1,n2;
}dVal;
int main(){
	int i=0;
	dVal v;
	vector<dVal> vet;
	do
	{
		cin>>v.n1>>v.n2;
		vet.push_back(v);
		i++;
	} while (v.n1!=v.n2);
	for (int j = 0; j < i-1; ++j)
	{
		if (vet[j].n1 > vet[j].n2)
		{
			cout<<"Decrescente"<<endl;
		}else{
			cout<<"Crescente"<<endl;
		}
	}
}