#include <iostream>
using namespace std;

class A
{
	public :
		A()
			
		{
			cout<<"\nA is  consturctor..";
		}
};

class B : public A
{
	public :
		B()
	
		{
			cout<<"B is a constructor..."<<endl;
		}
};

class c : public B
{
	public :
		c()
		
		{
			cout<<"\nC is a constructor...";
		}
};

int main()
{
	c cobj;
	return 0;
}
