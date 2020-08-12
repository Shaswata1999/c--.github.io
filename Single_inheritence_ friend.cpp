#include <iostream>
using namespace std;
class student
{
	protected :
		int roll_no;
	public :
		void get_data()
		{
			cout<<"Enter the roll no. : ";
			cin>>roll_no;
		}
};
class marks: public student
{
	private :
		int mark;
	public :
		void get_marks()
		{
			cout<<"Enter the obtain marks: ";
			cin>>mark;
		}
		friend void display_data(marks marksobj)
		{
			cout<<"The roll no. is: "<<marksobj.roll_no;
		}
};
int main()
{
	marks marksobj;
	marksobj.get_data();
	marksobj.get_marks();
	display_data(marksobj);
	return 0;
}
