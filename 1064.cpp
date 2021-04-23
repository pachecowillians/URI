#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int cont=0;
	float n, med=0;
	for (int i = 0; i < 6; ++i)
	{
		cin>>n;
		if(n>=0){
			cont++;
			med += n;
		}
	}
	cout<<cont<<" valores positivos"<<endl;
	std::cout.precision(1);
	std::cout << std::fixed;
	cout<<med/cont<<endl;
}
