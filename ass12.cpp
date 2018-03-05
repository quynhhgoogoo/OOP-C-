#include <iostream>
#include <cstring>
using namespace std;

struct STUDENT
{
   char name[50];
   unsigned int id;
   unsigned int grade;
};

int main( )
{
   STUDENT A;        // Declare the first student
   STUDENT B;        // Declare the second student
   STUDENT C;
   STUDENT D;
   STUDENT E;

   // first student information
   strcpy( A.name, "Elsa");
   A.id = 1000;
   A.grade = 5;

   //second student information
   strcpy( B.name, "Eiei");
   B.id = 2000;
   B.grade = 4;

   strcpy( C.name, "Tom");
   C.id = 3000;
   C.grade = 3;

   strcpy( D.name, "Mei");
   D.id = 4000;
   D.grade = 2;

   strcpy( E.name, "Tayo");
   E.id = 5000;
   E.grade = 1;
        STUDENT st[5]={A, B, C, D, E};
        STUDENT tempt;
    int k, j;
        for(k=0; k<5; k++){
                for(j=0; j<5; j++){
                        if(st[k].grade<st[j].grade){
                                tempt=st[k];
                                st[k]=st[j];
                                st[j]=tempt;

}
                }
        }
        for(k=0; k<5; k++)      cout<<st[k].name<<' '<<st[k].id<<' '<<st[k].grade<<endl;
}
