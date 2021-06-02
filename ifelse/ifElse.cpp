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
	return 0;
}
