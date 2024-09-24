#include <iostream>
using namespace std;

int main() {
	int side1, side2, side3;
	cout << "Enter the 3 sides of the Traingle : ";
	cin >> side1 >> side2 >> side3;
	if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
		cout << "\nTriangle is valid.";
	}
	else {
		cout << "\nTriangle is not valid.";
	}
	return 0;
}