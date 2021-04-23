#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){
	int i=1, j=8, cont=0;
	while(i!=9 || j!=13){
		if (cont==3)
		{
			i+=2;
			j+= 4;
			cont=1;
		}else{
			j--;
			cont++;
		}
		cout<<"I="<<i<<" J="<<j<<endl;
	}
}