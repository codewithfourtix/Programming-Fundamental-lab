#include<iostream>
using namespace std;
int main() {
	float num1, num2, num3, num4;
	cout << "Enter four numbers: ";
	cin >> num1 >> num2 >> num3 >> num4;
	if ((num1 < num2) && (num1 < num3) && (num1 < num4)) {
		cout << "The smallest number is: " << num1;
		if (((num2 < num3) && (num2 > num4)) || ((num2 > num3) && (num2 < num4))) {
			cout << "\nThe second largest number is: " << num2;
		}
		else if (((num3 > num2) && (num3 < num4)) || ((num2 > num3) && (num3 > num4))) {
			cout << "\nThe second largest number is:" << num3;
		}
		else if (((num4 < num2) && (num4 > num3)) || ((num4 > num2) && (num4 < num3))) {
			cout << "\nThe second largest number is: " << num4;
		}
	}
	else if ((num2 < num1) && (num2 < num3) && (num2 < num4)) {
		cout << "The smallest number is: " << num2;
		if (((num1 < num3) && (num1 > num4)) || ((num1 > num3) && (num1 < num4))) {
			cout << "\nThe second largest number is: " << num1;
		}
		else if (((num3 > num4) && (num3 < num1)) || ((num1 < num3) && (num3 < num4))) {
			cout << "\nThe second largest number is:" << num3;
		}
		else if (((num4 < num1) && (num4 > num3)) || ((num4 > num1) && (num4 < num3))) {
			cout << "\nThe second largest number is: " << num4;
		}
	}
	else if ((num3 < num1) && (num3 < num2) && (num3 < num4)) {
		cout << "The smallest number is: " << num3;
		if (((num1 < num2) && (num1 > num4)) || ((num1 > num2) && (num1 < num4))) {
			cout << "\nThe second largest number is: " << num1;
		}
		else if (((num2 > num4) && (num2 < num1)) || ((num2 < num4) && (num2 > num1))) {
			cout << "\nThe second largest number is:" << num2;
		}
		else if (((num4 < num1) && (num4 > num2)) || ((num4 > num1) && (num4 < num2))) {
			cout << "\nThe second largest number is: " << num4;
		}
	}
	else if ((num4 < num1) && (num4 < num3) && (num4 < num2)) {
		cout << "The smallest number is: " << num4;
		if (((num3 < num2) && (num3 > num1)) || ((num3 > num2) && (num3 < num1))) {
			cout << "\nThe second largest number is: " << num3;
		}
		else if (((num1 > num2) && (num1 < num3)) || ((num1 < num2) && (num1 > num3))) {
			cout << "\nThe second largest number is:" << num1;
		}
		else if (((num2 < num1) && (num2 > num3)) || ((num2 > num1) && (num2 < num3))) {
			cout << "\nThe second largest number is: " << num2;
		}
	}

	return 0;
}
