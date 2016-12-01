//functions
#include <iostream>
using namespace std;

int addition(int a, int b)
{
	int x;
	x = a+b;
	return x;
}

int main(int argc, char const *argv[])
{
	int z;
	//calling the function
	z = addition(50, 10);
	cout << "The answer is " << z << ".\n";
	//return 0;
}