 #include <iostream>
using namespace std;

//if else reference

int main() {

	int x;

	cout << "Enter in a funny number, haha\n";
	cin >> x;

//	standard if/else
	if (x == 4) {

		cout << "Oh my god \"x\" equals four!!!!" << "\n";

	} else {

		cout << "Damn,\"x\" doesnt equal four" << "\n";

}

//	if else (with else if)
    if (x == 3) {
		cout << "Wowie Zowie, \"x\" equals THREE\n";
	} else if (x == 5) {
		cout << "I see, \"x\" equals five\n";
	} else {
		cout << "I'm not entirely sure what \"x\" equals\n";
	}

//	Ternary Operator
	string result = (x < 18) ?
	"Good day.\n" : "Good evening.\n";
	cout << result;

//	Swtich Statement Example
	switch (x) {
		case 1:
			cout << "Monday\n";
			break;
		case 2:
			cout << "Tuesday\n";
			break;
		case 3:
			cout << "Wednesday\n";
			break;
		case 4:
			cout << "Thursday\n";
			break;
		case 5:
			cout << "Friday\n";
			break;
		case 6:
			cout << "Saturday\n";
			break;
		case 7:
			cout << "Sunday\n";
			break;
		default:
			cout << "What?\n";
	return 0;
	}
}
