//A program in which you define a reference for a pointer variable
#include <iostream>
using namespace std;

int main(void){
	int i = 100;
	int *p = &i;	//define ps as a pointer of s1
	int& r = *p;
	
	cout<<"The value of pointer's reference is : "<<r<<"="<<*p<<endl;
	cout<<"The value of a pointer is :"<<p<<endl;
}