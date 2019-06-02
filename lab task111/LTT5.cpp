#include<iostream>
using namespace std;
int main()
{
	int n=1,r=1,x=0,y=0,h=0,a=0,z=0;

		cout<<"Enter a value for"<<endl;
		cin>>x;
		cout<<"Enter a value for n;"<<endl;
		cin>>n;
		while(x>=1)
		{
			r = r*x;
		x--;
		}
		while(y>=1)
		{
			n = n*y;
			y--;
		}
		z =(x-y);
			while(z>=1)
			{

				h = h*z;
				z =z-1;
	}
	a = n/r*z;
	cout<<"value for ncr = "<<a<<endl;
	return 0;
}

