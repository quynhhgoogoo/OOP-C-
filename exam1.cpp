#include <iostream>
using namespace std;

class event {
public:
	string name;
	string type;
	string location;
	void set_values(string, string, string);
	void print_values();
	friend event* search_event_name(string, event[], string);
	friend event* search_concert_location(string, event[], string);
};

class concert : public event {
public:
	string date;
	string duration;
	string price;
	void set_values(string, string, string);
	void print_values();
	friend concert* search_concert_date(string, concert[], string);
	friend concert* search_concert_price(string, concert[], string);
};

void event::set_values(string name, string type, string location){
	this->name = name;
	this->type = type;
	this->location = location;
}

void concert::set_values(string date, string duration, string price){
	this->date = date;
	this->duration = duration;
	this->price = price;
}
	
void concert::print_values(){
	cout << "concert date " << this->date << " with duration: " << this->duration << " hours, have price: " << this->price << endl;
}

void event::print_values(){
	cout << "event name " << this->name << " with type: " << this->type << " have location: " << this->location << endl;
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

event * search_event(string check_name, string check_location, event events[], int num){
	int i;
	for(i=0; i< num; i++){
		if (events[i].name == check_name && events[i].location == check_location){
			return events + i;
			break;
		}
	}
	return 0;
}


int main(void){
	int i, num = 0;
	char choose;
	event *events = new event[100];
	concert *concerts = new concert[100];
	num = 10;
	for(i=0; i<3; i++){
		string s;
		s.push_back((char)('0'+i));
		events[i].set_values("quynh", "gold", "VAMK");
		concerts[i].set_values("041098",s, "10");
		events[i].print_values();
		concerts[i].print_values();
	
	}

	while(choose!='Q'){
		cout << "S: search based on concert's date"<<endl;
		cout << "P: search based on concert's price"<<endl;
		cout << "N: search based on event's name and location"<<endl;
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
			case 'N':{
				string name, location;
				cout << "Input name and location of concert you want to search: ";
				cin >> name >> location;
				event *found = search_event(name, location, events, num);
				//if found event with that name
				if(found!= 0)
					found->print_values();
				else
					cout << "No event with that name!" << endl;
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

