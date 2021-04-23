#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	int N,A,B;

	cin>>N>>A>>B;

	if (N >= A+B)
	{
		cout<<"Farei hoje!"<<endl;
	}else{
		cout<<"Deixa para amanha!"<<endl;
	}
	
	return 0;
}
