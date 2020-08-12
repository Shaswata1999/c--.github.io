#include <iostream>
using namespace std;

class A
{
	int x,y;
	public :
		void getdata();
		void display()
		{
			cout<<"\nThe value of x is : "<<x;
			cout<<"\nThe value of y is: "<<y;
		}
};
void A :: getdata()
{
	cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"Enter the value of y: ";
	cin>>y;
}
int main()
{
	A Aobj;
	Aobj.getdata();
	Aobj.display();
	return 0;
}
