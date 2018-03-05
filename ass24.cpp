//A program which reads a string from the standard input and prints the content of the string in ascending order. 
//Use pointer(s) in the string handling.

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int len;
	char str[100]; //defines an input string
	cout<<"Enter your string :";
	cin>>str;
	char *p; //Intialize pointer p with the address of first location
	p=&str[0];
	len=strlen(str);
	
	int k, j, tempt; //k and j are loop counters and tempt is the middle number
	for(k=0; k<len; k++){
		for(j=0; j<len; j++){
			if(*(p+k)<*(p+j)) {
				tempt=p[k];
				p[k]=p[j];
				p[j]=tempt;
			}
		}
	}
	for(k=0; k<len; k++){
		cout<<p[k]<<endl;
	}
	
	
	cout<<endl;
	
	
	return 0;
	
	
}
