#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void heron(int a, int b, int c) {
    double y = (a + b + c)/ 2;
    cout << sqrt(y*(y-a)*(y-b)*(y-c)) << "\n";
}

double hexagon_area(int l){
    double x = 3 * sqrt(3);
    double y = x * l * l;
    return (y/2);
}

double octagon_area(int s){
    double z = 1 + sqrt(2);
    double w = z*s*s;
    return (2*w);
}

int main() {
    int a;
    int b;
    int c;
    cout << "Enter a side length \n";
    cin >> a;
    cout << "Enter a side length \n";
    cin >> b;
    cout << "Enter a side length\n";
    cin >> c;
    heron(a, b, c);
    int s;
    cout << "enter a length \n";
    cin >> s;
    cout << hexagon_area(s) << "\n";
    cout << octagon_area(s) << "\n";
}