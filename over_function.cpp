#include <iostream>
using namespace std;

class overfunction
{
	private:
		public:
			int sum(int num1);
			int sum(int num1, int num2);
			int sum(int mun1,int num2,int num3);
};
int overfunction::sum(int num1)
{
	cout<<num1;
//	return(num1);
}
int overfunction::sum(int num1, int num2)
{
	cout<<(num1 + num2);
//	return(num1 + num2);
}
int overfunction::sum(int num1, int num2, int num3)
{
	cout<<(num1 + num2 + num3);
//	return(num1+num2+num3);
}
int main()
{
	overfunction overfunctionobj;
	overfunctionobj.sum(10);
	overfunctionobj.sum(10,20);
	overfunctionobj.sum(10,20,30);
}
