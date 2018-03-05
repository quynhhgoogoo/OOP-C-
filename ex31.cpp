#include <iostream>
using namespace std;

int main(void) {

  int i, *p, **q;
  i=100;
  p=&i;
  q=&p;

 //Here we print the content (value) of q, which is the address of p
  cout<<"\nThe content of q: q="<<q<<endl;

 //Here we print the content (value) of p, which is the address of i
  cout<<"\nThe content of p: *q="<<*q<<endl;

 //Here we print the content (value) of i
  cout<<"\nThe content of i: **q= *p: "<<**q<<"="<<*p<<endl;

  return 0;
}

