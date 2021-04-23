#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	int A,B,C,maior;

	cin>>A>>B>>C;

	maior = (A+B+abs(A-B))/2;
	maior = (maior+C+abs(maior-C))/2;

	cout<<fixed<<maior<<" eh o maior"<<endl;

	return 0;
}