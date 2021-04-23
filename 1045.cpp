#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	double x,y,z,ma,med,men;

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

	x = ma;
	y = med;
	z = men;

	if (x>=y+z)
	{
		cout<<"NAO FORMA TRIANGULO"<<endl;
	}else{
		if (pow(x,2)==pow(y,2) + pow(z,2))
		{
			cout<<"TRIANGULO RETANGULO"<<endl;
		}
		if (pow(x,2)>pow(y,2) + pow(z,2))
		{
			cout<<"TRIANGULO OBTUSANGULO"<<endl;
		}
		if (pow(x,2)<pow(y,2) + pow(z,2))
		{
			cout<<"TRIANGULO ACUTANGULO"<<endl;
		}
		if (x==y && y==z)
		{
			cout<<"TRIANGULO EQUILATERO"<<endl;
		}
		if ((x==y && y!=z) || (y==z && x!=y) || (x==z && y!=z))
		{
			cout<<"TRIANGULO ISOSCELES"<<endl;
		}
	}
	return 0;
}