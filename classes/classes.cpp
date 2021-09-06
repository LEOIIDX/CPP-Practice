 #include <iostream>
using namespace std;

/*
Classes

User defined data type that works for creating objects
*/

class MyClass //The class
{
	public: // defines if attributes are accessible outside of class
		int myNum; //int Attribute
		string myString; //string Attribute
};

int main() 
{
	MyClass myObj; //Creates an object from class

//	Access atributes and set the variables
	myObj.myNum = 15;
	myObj.myString = "funni text";

//	Print attribute variables
	cout << myObj.myNum << "\n";
	cout << myObj.myString << "\n";

//	You are able to create multiple objects from a class
	MyClass myObjTwo;

	myObjTwo.myNum = 30;
	myObjTwo.myString = "funnier text";

	cout << myObjTwo.myNum << "\n";
	cout << myObjTwo.myString << "\n";
	return 0;
}
