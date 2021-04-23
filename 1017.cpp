#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	double tempo,velocidade;

	cin>>tempo>>velocidade;

	cout.precision(3);

	cout<<fixed<<(velocidade*tempo)/12<<endl;

	return 0;
}
