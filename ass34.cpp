//A program in which you define two data structures: room and customer. 
//The fields for room should be: room_id, type (single, double, ...) and price per night. 
//The fields for customer should be: name, room_id and number_of_nights. 
//The program must ask the number of rooms and customers from the user, allocate memory for them and read 
//data for them. After reading the data, the program must print a list which shows what room (room_id) 
//is occupied by what customer and display the customer information

#include <iostream>
#include <new>
#include <cstring>
using namespace std;


struct room {
  int ID;			//defines room's ID
  char type[10];	//defines type of room
  double price;		//defines price per night
  int num;			//defines numbers of room
  };
  
 struct customer {
  char name[30];	//defines name of the customer
  int people;		//defines number of people
  int night;		//defines numbers of night
  };
  const int SIZE = 100;
  int main(){
	int i, sum=0;
	customer *cus;
	room *room;
	cus = new customer[SIZE];
	cout<<"Your name is : ";
	cin>>(*cus).name;
	cout<<"Enter the number of rooms you wanna stay : ";
	cin >> (*room).num;
	cout<<"Enter your number of people :";
	cin>>(*cus).people;
	cout<<"Enter total night you wanna stay :";
	cin>>(*cus).night;
  
	cout<<"Hello "<<(*cus).name<<endl;
	for(i=0; i<(*room).num; i++){
		cout<<"Enter your type of room "<<i+1<<": "<<endl;
		cin>>(*room).type;
		(*room).ID = i;
		cout<<"Your room ID is :"<<(*room).ID<<" with type is :"<<(*room).type<<endl;
		if ((*room).type=="single")		(*room).price= 10;
		else	(*room).price=20;
		sum = sum + ((*room).price)*((*cus).people)*((*cus).night);
	}
	cout<<"Your registered nights are :"<<(*cus).night<<endl;
	cout<<"Your total price is : "<<sum<<" euro"<<endl;
  
  }
