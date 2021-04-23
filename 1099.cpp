#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n, x,y, soma=0, mai, men;
	vector<int> vet;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		if (x>y)
		{
			mai = x;
			men = y;
		}else{
			mai = y;
			men = x;
		}
		for (int j = men+1; j < mai; ++j)
		{
			if (j%2!=0)
			{
				soma+=j;
			}
		}
		vet.push_back(soma);
		soma=0;
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<vet[i]<<endl;
	}
}