/*WAP in which you create a Student class having basic information for each student, like name, age and marks. By using friend function add marks of all the students [lets say 3 objects] and print it.*/

#include <iostream>
using namespace std;

float sum =0.0;
class Student
{
  private:
	      char name[30];
	      int age;
	      float marks;
  public:
        void read()
       	{
   	      cout<<"\nName : ";
	        cin>>name;
	        cout<<"Age : ";
	        cin>>age;
	        cout<<"Marks : ";
	        cin>>marks;
        }
        friend void total(Student);
};

void total(Student s)
{
   sum += s.marks;
}

int main()
{ 
	int i;
	Student stu[3];
  	for(i=0;i<3;i++){
		cout<<"\nEnter details of student "<<i+1<<" :";
		stu[i].read();
    		total(stu[i]);
	}
 	cout<<"\nTotal marks : "<<sum;
 	return 0;
}
