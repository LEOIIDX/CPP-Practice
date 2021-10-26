 #include <iostream>
using namespace std;

/*
Constructors

A Special method that is called when a object of class is created
*/

class MyClass //The class
{
	public: // Public access
		int x;
	private: //Private access (Members of a class are private by default)
		int y;
};

int main()
{
	cout << "Classes Section 3\n\n";
	MyClass myObj;
	myObj.x = 25;
	myObj.y = 50;
	return 0;
}
