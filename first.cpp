 #include <iostream>
using namespace std;

//single line comment
/*Multi Line comment
 * Haha
 */

int main() {
  cout << "Hello World!\n";
  cout << "Haha\n";
  
  int x = 2;
  
  int y = 15;
  cout << "The number is " << x << "\n";
  
  x = 10;
  cout << "The number is " << x << "\n";
  
  int sum = x + y;
  cout << "The sum of the numbers are " << sum << "\n";
  
  int multiOne = 2, multiTwo = 4;
  cout << multiOne * multiTwo << "\n";
  
  x = 5, y = 3000;
  cout << x + y << "\n";
  
  int coolNumber = 420;
  cout << "The cool number is " << coolNumber << "\n";
  
  const int nonChangeNum = 20;
//  nonChangeNum = 2222;
  cout << "The Number " << nonChangeNum << " is unchangeable!!!!\n";
  
  int userInput;
  cout << "Type a number please: \n";
  cin >> userInput;
  cout << "Your Number is: " << userInput << "\n";
  
  return 0;
} 
