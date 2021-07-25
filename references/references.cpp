 #include <iostream>
using namespace std;

//References
//Reference variable refers to existing variable with & operator

int main() {

string food = "Pizza";
string &meal = food;

cout << food << "\n";
cout << meal << "\n\n";

//Memory Address
//printing & operator of a variable shows the memory address of said variable
cout << &food << "\n\n";

//Pointers
//variables that store the memory address of other variables
string* ptr = &food; //prefered
//string *mystring:
//string * mystring;

cout << "Printing string food.\n"  << food << "\n";
cout << "Printing the memory address of food.\n" << &food << "\n";
cout << "Printing the memory address of food via ptr variable\n"  << ptr << "\n";
cout << "Printing string food via pointer\n" << *ptr << "\n\n";

//You can modify the pointer value. This will also change the value of the original value
*ptr = "burger";

cout << "Printing new pointer value\n" << *ptr << "\n";
cout << "Printing new food value\n" << food << "\n";
}
