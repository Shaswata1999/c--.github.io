#include <iostream>
using namespace std;
class id
{
	protected:
		int id;
	public:
		void name()
		{
			cout<<"Enter the id of the employee";
			cin>>id;
		}
		void id_display()
		{
			cout<<"The id of the employee is: "<<id<<endl;
		}
};
class details:public id
{
	protected:
		int b_salary,DA;
	public:
		void getdetails()
		{
			cout<<"Enter the basic salary of the employee: ";
			cin>>b_salary;
			cout<<"Enter the DA of the employee: ";
			cin>>DA;
		}
};
class output:public details
{
	protected:
		int total;
	public:
		void display()
		{
			total = b_salary+DA;
			cout<<"Total salary of the employee is: "<<total<<endl;
		}
};
int main()
{
	output outputobj;
	outputobj.name();
	outputobj.getdetails();
	outputobj.display();
	outputobj.id_display();
	return 0;
}
