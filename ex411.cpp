#include <iostream>
using namespace std;

unsigned long int factor(unsigned long int n);

int main(void) {

unsigned long int fact, num;

cout<<"\nType an integer number: ";
cin>>num;
fact = factor(num);
cout<<"\nThe factoriel of "<<num<<" is: "<<fact<<endl;

return 0;
}

unsigned long int factor( unsigned long int n) {
unsigned long int res;

 if(n==1) {
   cout<<n<<" ";
   return (1);
  }

 res=factor(n-1)*n;
 cout<<res<<" ";
 return(res);

}
