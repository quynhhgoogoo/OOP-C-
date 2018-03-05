//A program in which you define two null-terminated strings by using two pointer variables of type char. 
//Using only pointers the program must compare two strings character by character and inform what characters 
//in the strings are different.
#include<iostream>
#include<string.h>
using namespace std;

int main(){
        int len1, len2, tempt;
        char str1[100], str2[100]; //defines an input string
        cout<<"Enter your first string :";
        cin>>str1;
		cout<<"Enter your second string :";
		cin >> str2;
        char *p1, *p2; //Intialize pointer p1 and p2 with the address of first location
        p1=&str1[0];
		p2=&str2[0];
        len1=strlen(str1);
		len2=strlen(str2);

       int i=0;
	   if(len1>len2){
		   tempt = len1;
	   }
	   else {
		   tempt = len2;
	   }
	   while(i<tempt){
		   if(*(p1+i)!=*(p2+i)){
			   cout<<"Different characters in string :"<< *(p1+i)<<" and "<<*(p2+i)<<endl;
		   }
		i++;
	   }
}

