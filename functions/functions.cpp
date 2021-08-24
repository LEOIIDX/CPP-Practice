 #include <iostream>
using namespace std;

//Functions
//Block of code that runs if called

//creates the function
void newFunction()
{
	cout << "Function executed\n";
}

//Functions can be declared independent of definition
void secondFunction();
void parameterFunction(string fname);

int main() 
{
	newFunction(); //calls the function
	secondFunction();
	parameterFunction("Dale");
	return 0;
}

void secondFunction()
{
	cout << "Im a different function\n";
}

void parameterFunction(string fname)
{
	cout << fname << " gamer\n";
}
