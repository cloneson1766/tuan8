#include <iostream>

using namespace std;

int main( )
{
	int a[4] = {1,2,3,4};
	for (int *cp = a; (*cp) != '\0'; cp+=2) {
	cout << (void*) cp << " : " << (*cp) << endl;
	}
	return 0;
}

//neu cho cp+=2 se cho ra nhung gia tri ngau nhien ko nam trong mang.
