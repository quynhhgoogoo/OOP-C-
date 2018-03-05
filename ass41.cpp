//A program, which reads a an array of numbers and prints the smallest and the biggest values of the numbers.
//The program must ask how many numbers the user wants to enter and then read the numbers and print the 
//maximum and the minimum values. In the program use a function for reading the numbers, a function, which 
//returns the memory address of the smallest value and another function, which returns the memory address of 
//the biggest value. 
//The program must use these memory addresses to print the smallest and the biggest values.

#include <iostream>
using namespace std;

void read(int *num, int c);
void sort(int *num, int c);
int *prints(int *num, int c);        //prints memory address of smallest num$
int *printb(int *num, int c);        //prints memory address of biggest numb$

int main(void) {
        int i, c;
        cout<<"How many numbers you enter? \n";
        cin>>c;
        int num[c];
        read(num, c);
        int j, k;
        float swap;
        for(j=0; j<c; j++)
                for(k=j+1; k<c; k++)
                        if(num[j]<num[k]) {
                                swap = num[j];
                                num[j] = num[k];
                                num[k] = swap;
			}
        prints(num, c);
        printb(num, c);

return 0;
  }

//This function reads values from the standard input and
//initializes its array argument
 void read(int *num, int c) {

        for(int j=0; j<c; j++) {
                cout<<(j+1)<<". number: ";
                cin>>num[j];
        }
}


int *printb(int *num, int c) {
        int j=0, *p1=&num[j];
        p1 = &num[j];
        cout<<"The biggest number is "<<num[j]<<" "<<endl;
	return p1;
}


int *prints(int *num, int c) {
	int k=c-1, *p2=&num[k];
        p2 = &num[k];
        cout<<"The smallest number is "<<num[k]<<" "<<endl;
	return p2;
  }
