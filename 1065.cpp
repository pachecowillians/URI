#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int cont=0, n;
	for (int i = 0; i < 5; ++i)
	{
		cin>>n;
		if(n%2==0){
			cont++;
		}
	}
	cout<<cont<<" valores pares"<<endl;
}
