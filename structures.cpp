#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    string brand;
    string model;
    int year;
    string name;
  } myCar1, myCar2, Car3; // We can add variables by separating them with a comma here

  // Put data into the first structure
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.name = "hi";
  myCar1.year = 1999;

  // Put data into the second structure
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar1.name = "Hi1";
  myCar2.year = 1969;

  Car3.brand = "Volkkaswagen";
  Car3.model = "Golf";
  Car3.name = "hi2";
  Car3.year = 2011;

  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
  cout << Car3.brand << " " << Car3.model << " " << Car3.year << "\n";
  return 0;
}