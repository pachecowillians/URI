#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	string t;
	bool x = false;

    getline( cin,t );

	for (int i = 0; i < t.length(); ++i)
	{
		if (t[i] == 'H' || t[i] == 'Q' || t[i] == '+' || t[i] == '9')
		{
			x = true;
		}
		else if (x != true){
			x = false;
		}

	}

	if (x)
	{
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}