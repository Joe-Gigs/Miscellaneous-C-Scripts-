//strings input
#include <iostream>
#include <string>
using namespace std;

int main() {
	string myStr;
	cout << "What's your name friend?";
	getline(cin, myStr);
	cout << "Hello " << myStr << "!\n"; 
	cout << "What is your favorite band?";
	getline(cin, myStr);
	cout << "I like" << myStr << " too\n";
}