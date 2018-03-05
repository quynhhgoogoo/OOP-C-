#include <iostream>
using namespace std;

class concert {
public:
	string date;
	string duration;
	string price;
	void set_values(string, string, string);
	void print_values();
	friend concert* search_concert_date(string, concert[], string);
	friend concert* search_concert_price(string, concert[], string);
};

void concert::set_values(string date, string duration, string price){
	this->date = date;
	this->duration = duration;
	this->price = price;
}

void concert::print_values(){
	cout << "concert date " << this->date << " with duration: " << this->duration << " have price: " << this->price << endl;
}

concert * search_concert_date(string check_date, concert concerts[], int num){
	int i;
	for(i=0; i< num; i++){
		if (concerts[i].date == check_date){
			return concerts + i;
			break;
		}
	}
	return 0;
}

concert * search_concert_price(string check_price, concert concerts[], int num){
	int i;
	for(i=0; i< num; i++){
		if (concerts[i].price == check_price){
			return concerts + i;
			break;
		}
	}
	return 0;
}

int main(void){
	int i, num = 0;
	char choose;
	concert *concerts = new concert[100];
	num = 10;
	for(i=0; i<3; i++){
		string s;
		s.push_back((char)('0'+i));
		concerts[i].set_values("041098",s, "10");
		concerts[i].print_values();
	}

	while(choose!='Q'){
		cout << "S: search based on concert's date"<<endl;
		cout << "P: search based on concert's price"<<endl;
		cout<<"Q: quit" << endl;
		cin >> choose;
		switch(choose){
			case 'S':{
				string date;
				cout << "Input date of concert you want to search: ";
				cin >> date;
				concert *found = search_concert_date(date, concerts, num);
				//if found concert with that date
				if(found!= 0)
					found->print_values();
				else
					cout << "No concert with that date!" << endl;
			break;
			}
			case 'P':{
				string price;
				cout << "Input price of concert you want to search: ";
				cin >> price;
				concert *found = search_concert_price(price, concerts, num);
				//if found concert with that price
				if(found!= 0)
					found->print_values();
				else
					cout << "No concert with that price!" << endl;
			break;
			}
			case 'Q':
				cout << "See you next time!" << endl;
				break;
			default:
				cout << "Invalid choice!" << endl;
		}
	}


	return 0;
}
