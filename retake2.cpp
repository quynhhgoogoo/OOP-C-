#include <iostream>
#include <cstring>
#include <fstream>
#include <string.h>
using namespace std;

class Stack{
protected:
	char name[50];
	char employee_name[20];
	char date_and_time[50];

public:
	Stack(){};
	Stack(char name[50], char employee_name[20], char date_and_time[50]){
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
		cout << "Stack " << this->name << " with employee name: " << this->employee_name << " and date and time is " << this->date_and_time << endl; 
	}
};

void searchStack(Stack* all_stack, int num_stack, char name[]){
	int i;
	for(i=0; i<num_stack; i++){
		if(strcmp(all_stack[i].getName(), name)==0){
			all_stack[i].getInfo();
		}
	}
}

int main(int argc, char *argv[]){
	char date[20], duration[20], name[50], employee_name[20], date_and_time[50];
	double price;
	int insert_more = 1, choose;
	
	if(argc<2){
		cout<<"File name missing!"<<endl;
		cout<<"Usage: "<<argv[0]<<" file_path_name"<<endl;
		return -1;
	}

	
	cout << "Type 1 for insert more, type 2 for search stack: ";
	cin >> choose;
	if (choose==1){
		 //Here we open the file output stream for appending data to the file.
		ofstream file_output_stream(argv[1], ios::app);
		//Here we check whether the file is opened or not. 
		if(!file_output_stream) {
			cout<<argv[1]<<" can not be opened"<<endl;
			return 1;
		}
		while(insert_more!=0){
			cout << "Input name: ";
			cin >> name;
			cout << "Input employee name: ";
			cin >> employee_name;
			cout << "Input date and time: ";
			cin >> date_and_time;
			file_output_stream << "Stack " << name << ", employee name " << employee_name << " and date and time is " << date_and_time <<endl;
			cout << "Do you want to insert more? (1 for yes, 0 for no) ";
			cin >> insert_more;
		}
		file_output_stream.close();
		cout<<"Data was written successfully to "<<argv[1]<<endl;
	}
	if(choose==2){
		ifstream file_input_stream(argv[1]);
		//Here we check whether the file has been opened or not.
		if(!file_input_stream) {
			cout<<"\nCannot open file!";
			return 1;
		}
		cout << "Please input the name you want to search: ";
		cin >> name;
		char str[255];
		int found = 0;
		while(file_input_stream) {
			//Here we read specified characters to str variable 
			file_input_stream.getline(str, 255);
			//Here we print the content of the line if it is not NULL
			char * pch;
			pch = strstr(str,name);
			if(pch){ 
				found = 1;
				cout<<str<<endl;
			}
		}
		if(found==0)
			cout << "The stack was not found." << endl;
		
		//Here we close the file input stream.
		file_input_stream.close();

	}
	return 0;
}
