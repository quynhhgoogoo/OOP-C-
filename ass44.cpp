#include <iostream>
using namespace std;

float sum1(float n);
float sum2(float n);

int main(void){
	int n1,n2;
	cout << "Enter your final denomitor ";
	cin >> n1;
	cout << "Enter your final denomitor ";
	cin >> n2;
	cout << "Calculate first sum " << endl;
	cout << sum1(n1) << endl;
	cout << "Calculate second sum " << endl;
	cout << sum2(n2) << endl;
	return 0;
}

float sum1(float n){
    float sum;
    if(n==1)
        return 0.5;
    sum = 1 /( 2*n) + sum1(n-1);
    return sum;
}

float sum2(float n){
    float sum;
    if(n==1)
        return -1.0/3.0;
    sum = - n/(2*n+1) + sum2(n-1);
    return sum;
}
