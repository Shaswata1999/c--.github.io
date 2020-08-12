#include <iostream>
using namespace std;

class Result
{
	protected :
		int m1,m2;
	public:
		void get_marks()
		{
			cout<<"Enter marks 1: ";
			cin>> m1;
			cout<<"Enter marks 2: ";
			cin>> m2;
		}	
};
class output:public Result
{
	int total;
	public:
		void display()
		{
			total = m1+m2;
			cout<<"The total is: "<<total;
		}
};
int main()
{
	output outputobj;
	outputobj.get_marks();
	outputobj.display();
}
