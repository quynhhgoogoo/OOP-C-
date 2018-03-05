//this is a program which prints first 15 numbers of the following series
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//the first series
	int a=1, b=0, c=2; // a,b and c are the three first numbers in series
	int i, d;	// i is a loop counter and d represents next numbers
	cout<<a<<" "<<b<<" "<<c<<" ";
	for(i=4; i<16  ; i++)
		{
			if(i%2==0)
			{
				d=(i-2)/2;
			}
			else 
			{
				d=(i+1)/2;
			}
			cout<<d<<" ";
		
		}
	
	//the 2nd series
	int a1=1,b1=1,c1=1;	//represents the first three numbers in second series
	cout<<endl<<a1<<" "<<b1<<" "<<c1<<" ";
	for(i=1; i<13; i++)
	{
		d=a1+b1+c1;
		cout<<d<<" ";
		a1=b1;	//the 1st number becomes the 2nd number
		b1=c1;
		c1=d;
	}
	
	//the 3rd series
	cout<<endl;
	for(i=1; i<16; i++)
	{
		if(i%2==0)
		{
			d=-(i-2);
		}
		else
		{
			d=-i;
		}
		cout<<d<<" ";
	}
	return 0;
}