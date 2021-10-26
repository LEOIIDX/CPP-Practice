 #include <iostream>
using namespace std;

//String Reference

int main() {
	
	cout << "String Concatenation\n";
	
	//Initializes String
	string greeting = "Hello";
	cout << greeting << "\n";
	
	//Concatenation
	string firstName = "Joshua ";
	string lastName = "Stevens";
	
	string fullName = firstName + lastName;
	cout << fullName << "\n";
	
	fullName = firstName.append(lastName);
	cout << fullName << "\n\n";
	
//	string length
	string txt = "haha thats cool";
	cout << txt << "\n";

	cout << "txt string length is: " << txt.size() << "\n\n";
	
//	Accessing and altering within a string object
	string funniString = "Hiiiiii bingus";
	cout << funniString[4] << "\n";

	funniString[3] = 'F';
	cout << funniString << "\n\n";

//	User Input
	cout << "Type out your full name pls: " << "\n";
	getline (cin, fullName);
	cout << "Your name is: " << fullName << "\n\n";

	return 0;
}
