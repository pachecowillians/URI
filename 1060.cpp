#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int cont=0;
	float n;
	for (int i = 0; i < 6; ++i)
	{
		cin>>n;
		if(n>=0)
			cont++;
	}
	cout<<cont<<" valores positivos"<<endl;
}
