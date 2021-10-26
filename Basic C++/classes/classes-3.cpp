 #include <iostream>
using namespace std;

/*
Constructors

A Special method that is called when a object of class is created
*/

class MyClass //The class
{
	public: // Access specifier
		MyClass() //Constructor
		{
			cout << "Im from a constructor\n";
		}
		
};

/*
Constructor Parameters

Constructors can also take parameters (similar to standard functions)
*/

class Car
{
	public:
		string brand;
		string model;
		int year;
		Car(string x, string y, int z); //Contructor with parameters
//		{
//			brand = x;
//			model = y;
//			year = z;
//		}
};

//Constructors can also be defined outside the class
Car::Car(string x, string y, int z)
{
	brand = x;
	model = y;
	year = z;
}

int main()
{
	cout << "Classes Section 3\n\n";
	MyClass myObj;
	//Creates car objects
	Car carObj1("Honda", "Civic Type R", 1999);
	Car carObj2("Toyota", "AE86", 1987);
	//Prints values
	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

	return 0;
}
