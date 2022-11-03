//Lab10-1
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
bool isCardValid(int digits[], int size);

int main() {
	int digits[8], i;
	char Q;
	cout << "Enter 8-digit credit card # or Q to quit: ";
	for (i = 0; i < 8; i++) {
		cin >> digits[i];
		cout << digits[i] << " ";
		if (isCardValid(digits, 8) == true) {
			cout << "Card is valid.";
		}
		else if (isCardValid(digits, 8) == false) {
			cout << "Card is not valid.";
		}
		
	}
	cout << endl;
	return 0;
}

bool isCardValid(int digits[], int size) {
	int even = 0;
	int odd = 0;
	int sum;
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			even += digits[i];
		}
		else 
			odd += digits[i];
	}
	sum = even + odd;
	if (sum % 2 == 0) {
		return true;
	}
	if (sum % 2 != 0) {
		return false;
	}
}
