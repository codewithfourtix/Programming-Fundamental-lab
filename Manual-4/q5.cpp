#include <iostream>
using namespace std;

int main() {
	float attendance , quiz , labwork ,mid , final , quiz_wei , labwork_wei ,mid_wei , final_wei , Grand_total , bonus  ;
	cout << "Enter the Attendance percentage : ";
	cin >> attendance;
	if (attendance > 80) {
		cout << "\n Enter the marks of Quizzes : ";
		cin >> quiz;
		quiz_wei = 0.10 * quiz;
		cout << "\n Enter the marks of lab work  : ";
		cin >> labwork;
		labwork_wei = 0.30 * labwork;
		cout << "\n Enter the marks of mid  : ";
		cin >> mid;
		mid_wei = 0.20 * mid;
		cout << "\n Enter the marks of final : ";
		cin >> final;
		cout << "\n Bonus marks in Lab : ";
		cin >> bonus;
		if (labwork_wei < 30) {
			labwork_wei += bonus;
			if (labwork_wei > 30) {
				labwork_wei = 30;
			}
		}
		final_wei = 0.40 * final;
		Grand_total = quiz_wei + labwork_wei + mid_wei + final_wei;
		if (Grand_total >= 90 && Grand_total <= 100) {
			cout << "Grade : A+";
		}
		else if (Grand_total >= 80 && Grand_total <= 89) {
			cout << "Grade : A";
		}
		else if (Grand_total >= 70 && Grand_total <= 79) {
			cout << "Grade : B";
		}
		else if (Grand_total >= 60 && Grand_total <= 69) {
			cout << "Grade : C";
		}
		else if (Grand_total >= 50 && Grand_total <= 59) {
			cout << "Grade : D";
		}
		else if (Grand_total < 50) {
			cout << "Grade : F ";
		}
	}
	else {
		cout << "\nGrade : F";
	}
	return 0;
}