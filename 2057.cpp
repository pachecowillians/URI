#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){
	int partida, viagem, desloca;
	int hora;
	cin>>partida>>viagem>>desloca;
	
	hora = partida + viagem + desloca;

	if (hora<0)
	{
		hora = 24 + hora;
	}
	if (hora>24)
	{
		hora -= 24;
	}

	cout<<hora<<endl;
}