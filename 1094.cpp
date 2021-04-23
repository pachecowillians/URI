#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){
	float n, num, contC=0,contR=0,contS=0, tot=0;
	string val, op;

	cout<< fixed;
	cout<< setprecision(0);
	
	cin>>n;

	for (int i = 0; i < n+1; ++i){
		getline(cin,val);
		istringstream iss (val);
		iss>>num;
		if (!iss.fail()){
			op = val[val.length()-1];
			if (op=="C")
			{
				contC+=num;
			}else if(op=="R"){
				contR+=num;
			}else if(op=="S"){
				contS+=num;
			}
			tot += num;
		}
	}
	cout<<"Total: "<<tot<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<contC<<endl;
	cout<<"Total de ratos: "<<contR<<endl;
	cout<<"Total de sapos: "<<contS<<endl;
	cout<< setprecision(2);
	cout<<"Percentual de coelhos: "<<(contC/tot)*100<<" %"<<endl;
	cout<<"Percentual de ratos: "<<(contR/tot)*100<<" %"<<endl;
	cout<<"Percentual de sapos: "<<(contS/tot)*100<<" %"<<endl;
}