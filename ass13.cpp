#include <iostream>
using namespace std;

struct GRADE {
	double act; //defines activities in lecture
	double exam; //defines exam point
	bool pj; //defines project done 
	unsigned assess : 3; //defines status of the course pass/fail
}grade;

int main(void){
	cout<<"\n Enter your exam point in percentage :";
	cin>>grade.exam;
	cout<<"\n Enter your project status(1 is done and 0 is undone)";
	cin>>grade.pj;
	if (grade.exam<40 || grade.pj==0){
		grade.assess=0;
		cout<<"Your final grade is"<<grade.assess<<"\nFail"<<endl;
	}
	else {
		cout<<"\n Enter your activity grade: ";
		cin>>grade.act;
		if(grade.act>0.5) {
			grade.assess = ((grade.exam-40)/15)+1;
		}
		else {
			grade.assess = ((grade.exam-40)/15);
		}
		cout<<"Your final grade is :"<<grade.assess<<"\nPass"<<endl;
	}
}
