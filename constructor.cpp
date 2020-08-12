#include <iostream>
using namespace std;

class student
{
	public:
		int x;
		student();
		student(int y)
		{
			x = y;
		}
};
student::student()
{
		cout<<"I am a constructor "<<endl;
}
int main()
{
	student stuobj; //This object for 1st constractor
	student stuobj1(10); //This object for 2nd constractor
	cout<<"This is a programe of constructor: "<<endl;
	cout<< stuobj1.x;
	return 0;
}
