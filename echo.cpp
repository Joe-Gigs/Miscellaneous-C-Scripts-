#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	do {
		cout << "What is the password?: ";
		getline(cin, str);
	} while (str != "potato"); // key word to terminate program

	if (str == "potato") {
		cout << "Yes\n";
	}else {
		cout << "Nah";
	}

	return 0;
}