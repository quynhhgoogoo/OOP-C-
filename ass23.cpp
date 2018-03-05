//A program in which you define a null-terminated string by using a pointer variable of type char. 
//Use the same pointer to print the string so that white spaces are not printed.
#include <iostream>
using namespace std;

int main(){
	int i=0;
	char *p = "H e l l o t h e r e";
	while(*(p+i) != '\0') {
	if(*(p+i)!=' '){
		cout<<*(p+i);
	}
	i++;
	}
	cout<<endl;
}
