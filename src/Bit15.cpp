#include <iostream>
#include <iomanip>
using namespace std;

void binary(unsigned int u)
{
	int upper;
	if(u < 256)
		upper = 128;
	else
		upper = 32768;

	cout << setw(5) << u << ": ";

        // check if bit is set starting from the highest bit
        // (ex) upper = 128, 10000000, 01000000, 00100000, ..., 00000001

	for(int i = upper; i > 0; i = i/2) {
		if(u & i)
			cout << "1 ";
		else
			cout << "0 ";
	}
	cout << "\n";
}

int main()
{
	binary(5);
	binary(55);
	binary(255);
	binary(4555);
	binary(14555);
	return 0;
}
