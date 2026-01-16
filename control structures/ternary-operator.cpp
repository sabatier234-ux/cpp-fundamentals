#include <iostream>
#include <string>
using namespace std;
int main() {
	int month;
	cout << "enter month number between 1 and 12" << endl;
	cin >> month;
	string month_name;
	month_name = (month == 1) ? "january" :
		(month == 2) ? "february" :
		(month == 3) ? "march" :
		(month == 4) ? "april" :
		(month == 5) ? "may" :
		(month == 6 ? "june" :
		(month == 7) ? "july" :
			(month == 8) ? "august" :
			(month == 9) ? "septemer" :
			(month == 10) ? "october" :
			(month == 11) ? "november" :
			(month == 12) ? "december" :
			("invalid month"));
	cout << "the month is " << month_name << endl;
	system("pause");
	return 0;




}
