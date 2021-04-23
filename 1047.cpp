#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int h1,m1,h2,m2,difH,difM;

	cin>>h1>>m1>>h2>>m2;
	if (m1==m2 && h1==h2)
	{
		difH = 24;
		difM = 0;
	}else{
		if (h1==h2)
		{
			difH = 0;
		}
		else if (h2<h1)
		{
			difH = (24-h1)-h2;
		}else if (h1<h2)
		{
			difH = h2-h1;
		}
		difM = abs(m1-m2);
		if (m1>m2)
		{
			difH -=1;
		}
		if (h2>h1 && m1>m2)
		{
			difM = 60-difM;
		}
		if (m1==m2)
		{
			difM = 0;
		}

	}
	

	cout<<"O JOGO DUROU "<<difH<<" HORA(S) E "<<difM<<" MINUTO(S)"<<endl;
	
	return 0;
}