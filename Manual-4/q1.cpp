#include <iostream>
using namespace std;

int main() {
	int total_items, total_price;
	cout << " Enter the Number of items : ";
	cin >> total_items;
	cout << "\n Enter the total Price : ";
	cin >> total_price;
	if ((total_price < 100) && (total_items > 1 && total_items < 5)) {
		cout << "\n Level A";
	}
	else if ((total_price > 100 && total_price < 500) && (total_items > 6 && total_items < 15)) {
		cout << "\n Level B";
	}
	else if ((total_price > 500 && total_price < 1000) && (total_items > 16 && total_items < 30)) {
		cout << "\n Level C";
	}
	else if ((total_price > 1000) && (total_items > 30)) {
		cout << "\n Level D";
	}
	else {
		cout << "\nInvalid";
	}
	return 0;
}