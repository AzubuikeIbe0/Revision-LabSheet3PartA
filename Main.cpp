#include "safearray.h"


int main()
{

	SafeArray S1; //default safeArray of size 10
	SafeArray S2(9); //a safeArray of size 9
	int element = 0;
	cout << (element = S1.at(2)) << endl; //

	return 0;
}