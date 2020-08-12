#include <iostream>
using namespace std;

class A
{
	private:
		int x,y,z;
	public:
		int set_value()
		{
			cout<<"Enter the value of x: "<<endl;
			cin>>x;
			cout<<"Enter the value of y: "<<endl;
			cin>>y;
		}
		int cal()
		{
			z=x+y;
			}
};
class B
{
	private:
		int c;
	public:
		int set_value()
		{
			cout<<"Enter the value of z: ";
			cin>>c;
		}
		friend int A :: cal();
			
};

int main()
{
	A aa;
	B bb;
	aa.set_value();
	bb.set_value();
	cout<<"The summation of numbers is: "<<cal(bb);
	return 0;
}
