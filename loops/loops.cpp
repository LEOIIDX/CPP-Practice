 #include <iostream>
using namespace std;

//if else reference

int main() {
//	while loop
	int x = 0;
	while (x != 10) {
		x++;
		cout << x << "\n";
	}
	
	cout << "\n";
	
//	do/while loop
	int y = 0;
	do {
		y++;
		cout << y << "\n";
	}
	while (y != 5);
	
	cout << "\n";
	
//	for with continue/break
	for (int z = 0; z < 10;) {
		if (z == 5) {
//			continue;
			break;
		}
		z++;
		cout << z << "\n";
	}
}
