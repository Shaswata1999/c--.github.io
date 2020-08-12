#include <iostream>
using namespace std;

class B;
class A
{
	private:
		int x;
	public:
		void set_value(int m)
		{
		//	cout<<"Enter the value of x: "<<endl;
		//	cin>>x;
			x = m;
		}
		friend int avg(A,B);
};
class B
{
	private:
		int y;
	public:
		void set_value(int n)
		{
		
		//	cout<<"Enter the value of y: "<<endl;
		//	cin>>y;
			y = n;
		}
		friend int avg(A,B);
};
int avg(A a,B b)
{
	if (a.x>b.y)
	{
		cout<<"Maximum is"<<a.x;
	}
	else
		cout<<"Maximum is"<<b.y;
}
int main()
{
	A aa;
	B bb;
	aa.set_value(20);
	bb.set_value(10);
	avg(aa,bb);
}
