#include <iostream>
using namespace std;

class add
{
	int a,b,sum=0;
	public:
		void getdata(void);
		void display(void);
};
void add::getdata(void)
{
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter rhe second number: ";
	cin>>b;
}
void add::display(void)
{
	sum = a+b;
	cout<<"The sum of two number: "<<sum;
}
int main(void)
{
	add s;
	s.getdata();
	s.display();
}
