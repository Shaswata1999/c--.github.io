#include <iostream>
using namespace std;

class student
{
	public:
		student()
		{
			cout<<"I am a constractor "<<endl;
		}
		~ student()
		{
			cout<<"I am a destructor "<<endl;
		}
};
int main()
{
	student stuobj;
	cout<<"This programe for destructor "<<endl;
	return 0;
}
