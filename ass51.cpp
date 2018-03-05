#include <iostream>
using namespace std;

class employee {
	string name;
	string id;
	int salary;
public:
	void set_values(string, string, int);
	void print_values();
	friend employee* search_employee(string, employee[], int);
};

void employee::set_values(string name, string id, int salary){
	this->name = name;
	this->id = id;
	this->salary = salary;
}

void employee::print_values(){
	cout << "Employee " << this->name << " with id: " << this->id << " have salary: " << this->salary << endl;
}

employee * search_employee(string check_id, employee employees[], int num){
	int i;
	for(i=0; i< num; i++){
		if (employees[i].id == check_id){
			return employees + i;
			break;
		}
	}
	return 0;
}

int main(void){
	int i, num = 0;
	char choose;
	employee *employees = new employee[100];
	num = 10;
	for(i=0; i<3; i++){
		string s;
		s.push_back((char)('0'+i));
		employees[i].set_values("quynh",s, 10);
		employees[i].print_values();
	}

	while(choose!='Q'){
		cout << "A: add new employee information\nR: remove employee's information\nS: search based on employee's ID\nQ: quit" << endl;
		cin >> choose;
		switch(choose){
			case 'A':{
				//require input from user, set_value for the new employee in array
				string name, id;
				int salary;
				cout << "Input name: ";
				cin >> name;
				cout << "Input id: ";
				cin >> id;
				cout << "Input salary: ";
				cin >> salary;
				employees[num++].set_values(name, id, salary);
				cout <<"Added" << endl;
				break;
			}
			case 'R':{
				string id;
				cout << "Input ID of employee who you want to remove: ";
				cin >> id;
				employee *found = search_employee(id, employees, num);
				//if employee found with id
				if(found!=0){
					//move all other employee to one up in all_employee array
					int i = found - employees;
					num--;
					for(;i<num-1;i++)
						employees[i] = employees[i+1];
					cout << "Employee deleted!" << endl;
				}
				else
					cout << "No employee with that ID!" << endl;
				break;
			}
			case 'S':{
				string id;
				cout << "Input ID of employee who you want to search: ";
				cin >> id;
				employee *found = search_employee(id, employees, num);
				//if found employee with that id
				if(found!= 0)
					found->print_values();
				else
					cout << "No employee with that ID!" << endl;
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
