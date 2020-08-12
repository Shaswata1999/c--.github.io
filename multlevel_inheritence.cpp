#include <iostream>
using namespace std;

class name
{
	protected:
		string id;
	public:
		void Name()
		{
			cout<<"Enter name: ";
			cin>>id;
		}
		void namedisplay()
		{
			cout<<"The name of the student is: "<<id<<endl;
		}
};
class Result: public name
{
	protected:
		int m1,m2;
	public:
		void getaddmark()
		{
			cout<<"Enter marks1: "<<endl;
			cin>>m1;
			cout<<"Enter marks2: "<<endl;
			cin>>m2;
		}
};
class output: public Result
{
	protected :
		int total;
	public:
		void display()
		{
			total = m1+m2;
			cout<<"The total marks is: "<<total<<endl;
		}
};
int main()
{
	output outputobj;
	outputobj.Name();
	outputobj.getaddmark();
	outputobj.namedisplay();
	outputobj.display();
}
