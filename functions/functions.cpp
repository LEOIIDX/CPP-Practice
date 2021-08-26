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
void defaultFunction();

//You can give a function a default arguement to use when not given arguements
void dFunction(string touhou = "Marisa")
{
	cout << touhou << "\n";
}

//you can set multiple parameters in a function
void mFunction (string touhou, string spellCard)
{
	cout << touhou << " Spell Card: " << spellCard << "\n";
}

//replace void with a data type to make a function return a variable
int numFunction(int x)
{
	return 5 + x;
}

//Multiple functions can have the same name with different parameters
int dupeFunction (int x, int y)
{
	return x + y;
}

double dupeFunction (double x, double y)
{
	return x + y;
}

int main() 
{
	newFunction(); //calls the function
	secondFunction();
	parameterFunction("Dale");
	dFunction();
	dFunction("Reimu");
	mFunction("Marisa", "Love Coloured Master Spark");
	
	cout << numFunction(3) << "\n";
//	results from a function that returns a variable can be stored in a variable
	int a = numFunction(20);
	cout << a << "\n";

	int num1 = dupeFunction(3, 5);
	double num2 = dupeFunction(3.4, 2.22);

	cout << num1 << "\n";
	cout << num2 << "\n";
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
