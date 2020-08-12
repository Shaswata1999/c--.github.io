#include <iostream>
using namespace std;

class Result
{
	protected:
		float marks1,marks2,roll;
		
	public:
		void getmarks()
		{
			cout<<"Enter roll no.: ";
			cin>>roll;
			cout<<"\nEnter marks";
			cin>>marks1;
			cout<<"\nEnter marks:";
			cin>>marks2;
		}
};
class addmark
{
	protected:
		float admark;
	public:
		void getaddmark()
		{
			cout<<"Enter marks of additional subject";
			cin>>admark;
		}
};
class output: public Result,public addmark
{
	protected :
	float total;
	public:
		void display()
		{
			total = marks1+marks2+admark;
			cout<<"The total marks is: "<<total;
		}
};
int main()
{
	output outputobj;
	outputobj.getmarks();
	outputobj.getaddmark();
	outputobj.display();
}
