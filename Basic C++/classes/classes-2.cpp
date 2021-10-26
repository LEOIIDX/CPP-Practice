 #include <iostream>
using namespace std;

/*
Class Methods

Methods are functions that belong to a class.
Can be either be defined outside or inside the class.
*/

class MyClass //The class
{
	public: // defines if attributes are accessible outside of class
		int myNum; //int Attribute
			void myMethod() //Method/function defined inside the class
			{
				cout << "Im defined inside the class!!!\n";
			}
			void methodOut(); //Method/function declared
};

class paraClass
{
	public:
		int x(int xOut);
};

int paraClass::x(int xOut)
{
	return xOut;
}

void MyClass::methodOut()
{
	cout << "Im defined outside of the class!!\n";
}

int main() 
{
	cout << "Classes Section 2\n\n";
	MyClass myObj; //Creates an object of MyClass
	paraClass objTwo;

	myObj.myMethod(); //Calls the method
	myObj.methodOut();
	cout << objTwo.x(300) << "\n";
	return 0;
}
