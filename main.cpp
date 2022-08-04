#include <iostream>

using namespace std;


int main(){
	
	int *a_ptr = new int[3];
	
	a_ptr[0] = 1;
	a_ptr[1] = 2;
	a_ptr[2] = 3;
	
	a_ptr = a_ptr - 1;
	
	cout << a_ptr[0] << ", and " << a_ptr[3];
	
	delete [] a_ptr;
	return 0;
}