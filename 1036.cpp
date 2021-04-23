#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	double a,b,c,delta = 0,x1 =0,x2 = 0;

	cin>>a>>b>>c;

	delta = pow(b,2) - 4*a*c;
	if (delta<0)
	{
		cout<<"Impossivel calcular"<<endl;
	}else if(a == 0){
		cout<<"Impossivel calcular"<<endl;
	}else{
		x1 = ((-1)*b + sqrt(delta)) / (2*a);
		x2 = ((-1)*b - sqrt(delta)) / (2*a);

		cout.precision(5);

		cout<<"R1 = "<<fixed<<x1<<endl;
		cout<<"R2 = "<<fixed<<x2<<endl;
	}


	return 0;
}
