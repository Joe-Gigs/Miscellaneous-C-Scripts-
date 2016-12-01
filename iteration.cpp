//countdown using decrementing
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n = 10;

	while(n>0) {
		cout << n << ",";
		--n;
	}
	cout << "Done\n";
	return 0;
}