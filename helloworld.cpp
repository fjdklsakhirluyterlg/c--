#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x << "\n";
  if (x > 10) {
      cout << "hello \n";
  } else {
      cout << "Goodbye \n";
  }
  return 0;
}