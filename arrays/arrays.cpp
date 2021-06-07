 #include <iostream>
using namespace std;

//arrays
//able to not declare length or contents of array

int main() {
//	setting array and outputting part of array
	string cars[4] = {"Toyota","Honda","Mazda","Nissan"};
	cout << cars[2] << "\n\n";
	
//	changing array contents
	cars[0] = "Daihatsu";
	cout << cars[0] << "\n\n";
	
//	looping through arrays
	for (int i = 0; i < 4; i++) {
		cout << i << ": " << cars[i] << "\n";
	}
}
