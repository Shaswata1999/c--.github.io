#include <iostream>
using namespace std;

class A
{
	private :
		int x,y;
	public :
		void get_value();
		friend int cal(A aa);
};
void A::get_value()
{
	cout<<"enter value of x: "<<endl;
	cin>>x;
	cout<<"enter value of y: "<<endl;
	cin>>y;
}
int cal(A aa)
{
	return(aa.x+aa.y);
}
int main()
{
	A a;
	a.get_value();
	cout<<"The value of two number is: "<<cal(a);
}
