#include <iostream>

using namespace std;

int main()
{
	short a[10] = { 1,2,3,4,5,6,7,8,9,10};
	
	short (*psr)[10] = &a;
	
	cout << (*psr)[1];
	return 0;
}

