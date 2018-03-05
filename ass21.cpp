//A program which reads five decimal numbers from the keyboard and stores them to an array. 
//Use a pointer to calculate the sum of numbers in the array and print the result to the standard output device.

#include <iostream>

using namespace std;

int main(){
	
	int i;
	double a[5];	//defines five decimal numbers needed
	double sum = 0;	//sum is the initial sum of 5 decimal numbers needed
	double *p, num;	//p is the pointer
	for(i=0; i<5; i++){
	cout<<"Enter decimal number :"<<endl;
	cin>>a[i];
	p= &a[i];
	num = *p;
	sum = sum + num;
	}
	cout<<"Total :"<<sum<<endl;
	
}
