#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Write a programme that calculates how many natural (i.e. integer, positive) numbers there are not greater than n that are divisible by 5 but not divisible by 3. The number n is to be taken from the user's" << endl;
	
	int n;
	
	cout << "Specify n:" << endl;
	cin >> n;

	if (n < 0) {
		cout << "The number n is less than zero" << endl;
		return 0;
	}
	
	int quantity = 0;

	for (int number = 0; number <= n; number++) {
		if (number % 5 == 0 && number % 3 != 0) {
			quantity++;
			number++;
		}
		
		if (number >= n) {
			cout << "The result is: " << quantity << endl;
			return 0;
		}
	}	
}