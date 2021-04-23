#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int x,y,z,ma,med,men;

	cin>>x>>y>>z;

	if (x>y)
	{
		if (x>z)
		{
			ma = x;
			if (y>z)
			{
				med = y;
				men = z;
			}else{
				med = z;
				men = y;
			}
		}else{
			ma = z;
			if (y>x)
			{
				med = y;
				men = x;
			}else{
				med = x;
				men = y;
			}
		}
	}else if (y>x)
	{
		if (y>z)
		{
			ma = y;
			if (x>z)
			{
				med = x;
				men = z;
			}else{
				med = z;
				men = x;
			}
		}else{
			ma = z;
			if (y>x)
			{
				med = y;
				men = x;
			}else{
				med = x;
				men = y;
			}
		}
	}else if (z>x)
	{
		if (z>y)
		{
			ma = z;
			if (y>x)
			{
				med = y;
				men = x;
			}else{
				med = x;
				men = y;
			}
		}else{
			ma = y;
			if (z>x)
			{
				med = x;
				men = z;
			}else{
				med = z;
				men = x;
			}
		}
	}

	cout<<men<<endl;
	cout<<med<<endl;
	cout<<ma<<endl;
	cout<<endl;
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	return 0;
}