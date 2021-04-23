#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){
	float i=0, j=0, cont=0;
	while(i<2 || cont!=3){
		if (cont==3)
		{
			i+=0.2;
			j-= 1.8;
			cont=1;
		}else{
			j++;
			cont++;
		}
		cout<<"I="<<i<<" J="<<j<<endl;
	}
}