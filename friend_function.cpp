#include <iostream>
using namespace std;
class Rectangle
{
	private:
		int length,width;
	public:
		void get_data();
		friend void display_data(Rectangle recobj);	
};
void Rectangle :: get_data()
{
	cout<<"Enter length: ";
	cin>>length;
	cout<<"Enter width: ";
	cin>>width;
}
void display_data(Rectangle recobj)
{
	cout<<"The length is: "<<recobj.length<<endl;
	cout<<"The width is: "<<recobj.width;
}
int main()
{
	Rectangle recobj;
	recobj.get_data();
	display_data(recobj);
}
