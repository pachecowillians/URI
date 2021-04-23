#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){

	int x,y,i=0,s=0;

	cin>>x>>y;
	

	if (x>y)
	{

		i = y;
		while(i<x-1){
			i++;
			if (i%2!=0)
			{
				s+=i;
			}

		}
	}else{
		i = x;
		while(i<y-1){
			i++;
			if (i%2!=0)
			{
				s+=i;
			}

		}
	}
	
	cout<<s<<endl;

	return 0;
}
