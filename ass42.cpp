#include <iostream>
#include <cstring>
using namespace std;

//These are function prototypes
char** read(char** name, int c);
void sort(char** name, int c);
void print(char** name, int c);

int main(void) {

 int c;

 cout<<"How many numbers you are going to enter? \n";
 cin>>c;
 char** name=new char*[c];
 name=read(name, c);
 sort(name, c);
 print(name, c);
 return 0;
  }

//This function reads values from the standard input and
//initializes its array argument
 char** read(char** name, int c) {

  for(int j=0; j<c; j++) {
        name[j]=new char[100];
        cout<<"Input names: ";
        cin>>name[j];
  }
 return name;
 }



//This function sorts the content of its array argument
//in descending order
void sort(char** name, int c) {
  int j, k;
  char swap[80];
  for(j=0; j<c; j++)
   for(k=j+1; k<c; k++)
    if(strcmp(name[j],name[k])>0) {
     strcpy(swap,name[j]);
     strcpy(name[j],name[k]);
     strcpy(name[k],swap);
     }

  }

//This function prints the content of its array argument
  void print(char** name, int c) {

   for(int j=0; j<c; j++)
    cout<<name[j]<<" "<<endl;
  }
