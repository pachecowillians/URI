#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){
	int i=0;
	int v;
	vector<int> vet;
	do
	{
		cin>>v;
		vet.push_back(v);
		i++;
	} while (vet[i-1]!=2002);
	for (int j = 0; j < i; ++j)
	{
		if (vet[j]!=2002)
		{
			cout<<"Senha Invalida"<<endl;
		}else{
			cout<<"Acesso Permitido"<<endl;
		}
	}
}