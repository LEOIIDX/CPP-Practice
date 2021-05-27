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
	
	cout << "String Length\n";
	
	string txt = "haha thats cool";
	cout << "txt string length is: " << txt.size() << "\n\n";
	
	return 0;
} 
