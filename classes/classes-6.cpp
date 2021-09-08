 #include <iostream>
using namespace std;

/*
Inheritance

It is possible to inherit attributes and methods from other classes.

derived class - the class that inherits from another class
base class - the calss being inherited from
*/

// Base Class
class Vehicle
{
	public:
		string brand = "Honda";
		void horsepower()
		{
			cout << "180\n";
		}
};

// Derived class
class Car: public Vehicle
{
	public:
		string model = "Civic";
};

int main()
{
	cout << "Classes Section 6\n\n";
	Car myCar;
	myCar.horsepower();
	cout << myCar.brand + " " + myCar.model + "\n";
	return 0;
}
