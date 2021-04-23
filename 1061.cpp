#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

typedef struct evento{
	int dia, hora, minuto, segundo;
}evento;

int main(){
	string d1,h1,d2,h2,aux;
	evento e1,e2,er;

	getline(cin,d1);
	getline(cin,h1);
	getline(cin,d2);
	getline(cin,h2);

	e1.dia = int(d1[4]) - 48;
	e2.dia = int(d2[4]) - 48;

	e1.dia = stoi(d1.substr(d1.find(" ")+1,d1.length()));
	e1.hora = stoi(h1.substr(0,2));
	e1.minuto = stoi(h1.substr(5,6));
	e1.segundo = stoi(h1.substr(10,11));

	e2.dia = stoi(d2.substr(d2.find(" ")+1,d2.length()));
	e2.hora = stoi(h2.substr(0,2));
	e2.minuto = stoi(h2.substr(5,6));
	e2.segundo = stoi(h2.substr(10,11));

	er.dia = abs(e2.dia - e1.dia);
	er.hora = abs(e2.hora - e1.hora);
	er.minuto = abs(e2.minuto - e1.minuto);
	er.segundo = abs(e2.segundo - e1.segundo);

	if (e1.hora > e2.hora)
	{
		er.dia--;
		er.hora = 24 - er.hora;
	}
	if (e1.minuto > e2.minuto)
	{
		er.hora--;
		er.minuto = 60-er.minuto;
	}
	if (e1.segundo > e2.segundo)
	{
		er.minuto--;
		er.segundo = 60 - er.segundo;
	}

	cout<<er.dia<<" dia(s)"<<endl;
	cout<<er.hora<<" hora(s)"<<endl;
	cout<<er.minuto<<" minuto(s)"<<endl;
	cout<<er.segundo<<" segundo(s)"<<endl;

}
