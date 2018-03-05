
//A program in which you define two separate arrays of type Property data struc$
//and uses pointers to compare, find and print out those elemnts of arrays whic$
//values for house, car and boat are the same.



    #include <iostream>
    using namespace std;


     struct Property{
     char house[10];
     char *car;
     char *boat;
    };

    int main(void) {
     
     int i, tempt, len1, len2;
     Property friends1[] = { {"Yes",(char *)"0", (char *)"2"}};
	Property friends2[] = { {"Yes", (char *)"0", (char *)"1"}};
     Property *p1, *p2;
     
	 p1=friends1;
	 p2=friends2;
	 cout<<"The equal elements are :"<<endl;
	 
	if((*p1).house==(*p2).house)	cout<<"House"<<endl;
	if((*p1).car==(*p2).car)	cout<<"Car"<<endl;
	if((*p1).boat==(*p2).boat)	cout<<"Boat"<<endl;
    return 0;
    }

