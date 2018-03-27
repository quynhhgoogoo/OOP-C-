#include <iostream>
#include <cstring>
using namespace std;

class Task{
protected:
	char name[50];
	char employee_name[20];
	char date_and_time[10];

public:
	Task(){};
	Task(char name[50], char employee_name[20],	char date_and_time[50]){
		strcpy(this->name, name);
		strcpy(this->employee_name, employee_name);
		strcpy(this->date_and_time, date_and_time);
	};
	char* getName(){
		return this->name;
	}
	
	char* getemployee_name(){
		return this->employee_name;
	}
	
	char* getdate_and_time(){
		return this->date_and_time;
	}
	void getInfo(){
		cout << "Task " << this->name << " with employee name: " << this->employee_name << " and date and time is " << this->date_and_time << endl;
	}
};

// I define only 1 function search task because search base on name OR date and time
void searchTask(Task* all_task, int num_task, char name_or_date_and_time[]){
	int i;
	for(i=0; i<num_task; i++){
		if(strcmp(all_task[i].getName(), name_or_date_and_time)==0){
			all_task[i].getInfo();
		}
		if(strcmp(all_task[i].getdate_and_time(), name_or_date_and_time)==0){
			all_task[i].getInfo();
		}
	}
}

void searchTaskWithDate(Task* all_task, int num_task, char date_and_time[]){
	int i;
	for(i=0; i<num_task; i++){
		if(strcmp(all_task[i].getdate_and_time(), date_and_time)==0){
			all_task[i].getInfo();
		}
	}
}

void searchTaskWithEmployeeName(Task* all_task, int num_task, char employee_name[]){
	int i;
	for(i=0; i<num_task; i++){
		if(strcmp(all_task[i].getemployee_name(), employee_name)==0){
			all_task[i].getInfo();
		}
	}
}

int main(void){
	int num_task = 0;
	Task* all_task = new Task[20];
	all_task[0] = Task("1", "Anna", "3-08-12");
	all_task[1] = Task("2", "Beta", "3-08-12");
	all_task[2] = Task("3", "Laza", "12-09-12");
	all_task[3] = Task("4", "Lizzi", "4-09-12");
	all_task[4] = Task("5", "Lizzi", "0-10-12");
	all_task[5] = Task("6", "Lizzi", "6-10-12");
	num_task = 6;
	cout << "Search task with employee name is Lizzi: " << endl;
	searchTaskWithEmployeeName(all_task, num_task, "Lizzi");
	cout << "Search task with date and time is 6h00 10-12: " << endl;
	searchTaskWithDate(all_task, num_task, "6-10-12");
	return 0;
}
