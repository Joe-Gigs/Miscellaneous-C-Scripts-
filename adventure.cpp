#include <iostream>
using namespace std;

void init() 
{
	string answer1;
	
	cout << "Door 1 or Door 2?\n";
	getline(cin, answer1);
	if (answer1 == "Door 1") {
		cout << "You find a shoe\n";
	} else if (answer1 == "Door 2") {
		cout << "A man with a tattoo punches you in the ear\n";
	}
}

int main(int argc, char const *argv[])
{
	init();
	return 0;
}