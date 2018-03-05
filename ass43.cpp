//A program in which you define a struct for customer information. The fields in the struct should be name, id and the amount of purchase. 
//The program should read the information of a group of customers to an array and then display the information of the customers in 
//descending order according to the purchase amounts. Use a function for reading the customer information and one for sorting the customers
#include <iostream>
using namespace std;
struct Customer {
        char name[100];    //defines customers' name
        char id[60];                       //defines id
        int amount;           //defines customers' amount of purchase
};
void read(Customer *x, int count);
void sort(Customer *x, int c);
void print(Customer *x, int c);

int main(void) {
        int c, j;
        cout<<"How many customer you are going to enter ?";
        cin>>c;
        Customer x[c];
        for(j=0; j<c; j++)
        read(x, j);
        sort(x, c);
        print(x, c);
 return 0;
}

void read(Customer *x, int count) {
        Customer *new_Customer=new Customer;
        cout<<"\nType informations of the customer:\n";
        cout<<"Name: ";
        cin>>new_Customer->name;
        cout<<"ID: ";
        cin>>new_Customer->id;
        cout<<"Amount of purchase: ";
        cin>>new_Customer->amount;
        x[count]=*new_Customer;
        delete new_Customer;
}

void sort(Customer *x, int c){
        int j, k;

Customer swap;
        for(j=0; j<c-1; j++)
        for(k=j+1; k<c; k++){
        if(x[j].amount<x[k].amount) {
     swap = x[j];
     x[j] = x[k];
     x[k] = swap;
}
}
}
void print(Customer *x, int c) {
        int j;
   for(int j=0; j<c; j++)
    cout<<x[j].name<<" "<<x[j].id<<" "<<x[j].amount<<endl;
  }
