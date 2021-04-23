#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	int i = 0,n,x;
	cin>>n;
	while(i<n){

		cin>>x;

		if (x%2 == 0 and x != 0)
		{
			cout<<"EVEN";
		}else if(x!=0){
			cout<<"ODD";
		}


		if (x> 0)
		{
			cout<<" POSITIVE"<<endl;
		}else if(x<0){
			cout<<" NEGATIVE"<<endl;
		}else{
			cout<<"NULL"<<endl;
		}
		i++;
	}
	return 0;
}