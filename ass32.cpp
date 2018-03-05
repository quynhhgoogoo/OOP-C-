//A program, which uses new and delete operator for reserving memory for an array of prime numbers. 
//The program must ask the interval from which prime numbers must be searched, find them, save them 
//to the array and print them to the standard output.

#include <iostream>
#include <new>
#include <cmath>
using namespace std;


    int main() {

    int *dp;
    int a,b,size; //defines input numbers and the size of range
	int i, j; 	//defines loop counter
	cout<<"Enter a start number : ";
	cin>>a;
	cout<<"Enter an end number : ";
	cin>>b;
	size = (b-a)+1;
	dp = new int[100];
	for(i=a; i<=b; i++){
		for( j=2;j<b;j++){
				//cout<<"i and j"<<endl;
				//cout<<i<<" "<<j<<endl;
               if((i%j==0) && (j!=i) && (j!=1)){
		goto stop;
               }
		else	   	*dp = i;

				}  
				cout<<*dp<<" ";
        stop: cout<<"";
	}
    dp=NULL; 
	cout<<endl;
	delete [] dp;
     }


