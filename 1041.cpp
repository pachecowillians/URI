#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	double x,y;
	string q = "";

	cin>>x>>y;

	if (x>0 && y>0)
	{
		q = "Q1";
	}else if (x<0 && y>0)
	{
		q = "Q2";
	}else if (x<0 && y<0)
	{
		q = "Q3";
	}else if (x>0 && y<0)
	{
		q = "Q4";
	}else if (x==0 && y!=0)
	{
		q = "Eixo Y";
	}else if (y==0 && x!=0)
	{
		q = "Eixo X";
	}else if (x==0 && y==0)
	{
		q = "Origem";
	}

	cout<<q<<endl;

	return 0;
}