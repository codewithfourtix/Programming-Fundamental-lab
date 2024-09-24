#include <iostream>
using namespace std;

int main() {
	int input, day , temp, per_humi;
	cout << "Input 3 for Mon, 4 for Tue, 5 for Wed , 6 for Thrus , 7 for Fri , 8 for Sat , 9 for Sun : ";
	cin >> input;
	if (input < 3 && input > 9) {
		cout << "Invalid Day : ";
	}
	cout << "\n Enter the Temperature : ";
	cin >> temp;
	cout << "\n Enter the percentage humidity : ";
	cin >> per_humi; 
	if (input == 7 || input == 8 || input == 9) {
		if (temp <= 32 && temp >= 15) {
			if (per_humi > 30 && per_humi < 50) {
				cout << "Perfect Day Molly! You can go outside!!!!! ";
			}
			else {
				cout << "The weather is too humid ";
				return 0;
			}
		}
		else {
			cout << "Weather is not good.";
			return 0;
		}
	}
	else {
		cout << "It's not weekend yet.";
	}
	return 0;
}