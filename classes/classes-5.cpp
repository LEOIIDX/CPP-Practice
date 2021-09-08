 #include <iostream>
using namespace std;

/*
Encapsulation

Prevention of sensitive data being visible from users
*/

class Employee
{
	private:
		int salary; //Private attribute

	public:
		//setter
		void setSalary(int s)
		{
			salary = s;
		}
		//getter
		int getSalary()
		{
			return salary;
		}
};

int main()
{
	cout << "Classes Section 5\n\n";
	Employee myObj;
	myObj.setSalary(50000);
	cout << myObj.getSalary() << "\n";
	return 0;
}
