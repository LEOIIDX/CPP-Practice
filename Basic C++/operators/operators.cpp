 #include <iostream>
using namespace std;

//Operator Reference

int main() {
	
	cout << "Operator Reference" << "\n";
	
	int add = 100 + 25;
	cout << "100 + 25 = " << add << "\n";
	
	int sub = 100 - 25;
	cout << "100 - 25 = " << sub << "\n";
	
	int multi = 100 * 25;
	cout << "100 * 25 = " << multi << "\n";
	
	int div = 100 / 25;
	cout << "100 / 25 = " << div << "\n";
	
	int mod = 100 % 30;
	cout << "100 % 30 = " << mod << "\n";
	
	int inc = ++add;
	cout << "100 + 1 = " << inc << "\n";
	
	int dec = --add;
	cout << "100 - 1" << dec << "\n\n";
	
	cout << "Assignment Operators" << "\n";
	
	int x = 10;
	
	x = 20;
	cout << "x = 20: " << x << "\n";
	
	x += 2;
	cout << "x += 2: " << x << "\n";
	
	x -+ 2;
	cout << "x -= 2: " << x << "\n";
	
	x *= 2;
	cout << "x *= 2: " << x << "\n";
	
	x /= 2;
	cout << "x /= 2: " << x << "\n";
	
	x %= 3;
	cout << "x %= 3: " << x << "\n";
	
	x &= 2;
	cout << "x &= 2: " << x << "\n";
	
	x |= 2;
	cout << "x |= 2: " << x << "\n";
	
	x ^= 2;
	cout << "x ^= 2: " << x << "\n";
	
	x >>= 2;
	cout << "x >>= 2: " << x << "\n";
	
	x >>= 2;
	cout << "x <<= 2: " << x << "\n\n";
	
	cout << "Comparison Operators" << "\n";
	
	int y = 5;
	int z = 3;
	
	cout << "5 == 3: " << (y == z) << "\n";
	cout << "5 != 3: " << (y != z) << "\n";
	cout << "5 > 3: " << (y >= z) << "\n";
	cout << "5 < 3: " << (y <= z) << "\n";
	cout << "5 >= 3: " << (y >= z) << "\n";
	cout << "5 <= 3: " << (y <= z) << "\n\n";
	
	cout << "Logical Operators" << "\n";
	
	cout << "5 < 10 && 5 < 3: " << (5 < 10 && 5 < 3) << "\n";
	cout << "5 < 10 || 3 < 4: " << (5 < 10 || 3 < 4) << "\n";
	cout << "!(5 < 10 && 3 < 4): " << (!(5 < 10 && 3 < 4)) << "\n\n";
	
	return 0;
} 
