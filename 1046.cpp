#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int n1,n2,dif;

	cin>>n1>>n2;

	if (n2>n1)
	{
		dif = n2-n1;
	}else if(n1>n2){
		dif = 24-n1+n2;
	}else{
		dif = 24;
	}

	cout<<"O JOGO DUROU "<<dif<<" HORA(S)"<<endl;
	
	return 0;
}