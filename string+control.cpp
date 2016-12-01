//combining string input and basic control flow
#include <iostream>
#include <string>
using namespace std;

int main() {
	//define variable for string input
	int number;
	//string answer;
	cout << "Guess a number: ";
	cin >> number;
	
	if (number == 7) {
		cout << "Yes, yes\n";
	} else {
		cout << "no, that's not it\n";
	}
	return true;
}