#include <iostream>
using namespace std;

class student 
{
	int age;
	char name[50];
	public:
		void getdata();
		void display();
};
void student::getdata(void)
{
	cout<<"Enter the age: ";
	cin>>age;
	cout<<"Enter the name: ";
	cin>>name;
}
void student::display(void)
{
	cout<<"The name of the person: "<<name<<endl;
	cout<<"Age of the person is: "<<age;
}
int main(void)
{
	student s;
	s.getdata();
	s.display();
}
