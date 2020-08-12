#include <iostream>
using namespace std;

class Teacher
{
	protected:
		string name;
		int age;
	public:
		void display()
		{
			cout<<"I am a teacher: "<<endl;
			cout<<"Enter Teacher name :";
			cin>>name;
			cout<<"\nEnter age: ";
			cin>>age;
		}
};
class math:public Teacher
{
	public:
		void mathsub()
		{
			cout<<"I can teach Math: "<<endl;
		}
};

class playmusic: public Teacher
{
	public:
		void playmus()
		{
			cout<<"I can play guiter: "<<endl;
		}
};
int main()
{
	math mathobj;
	playmusic playmusobj;
	mathobj.display();
	mathobj.mathsub();
	playmusobj.display();
	playmusobj.playmus();
	return 0;
}
