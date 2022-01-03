#include <iostream>

using namespace std;

int main() {
	int z = 200;
	
	// actual value
	cout << z << endl;
	
	// printing address of variable 'z'
	// address-of operator (&) - determine where the memory location is
	cout << &z << endl;
	
	// output the value in the memory
	cout << *(&z) << endl;
	
	// incorrect initialization using a pointer (will produce a compilation error):
	// int* y = 100;
	
	// correct initialization using a pointer:
	int* y = &z;
	
	// output actual value with memory address of variable 'z'
	cout << z << "<--->" << y << endl;
	
	// accessing actual value using dereferencing operator (*)
	cout << z << "<--->" << *y << endl;
	
	// change value of variable 'z'
	*y = 500;
	cout << z << endl;
	
	// arrays are actually pointers
	const int size = 5;
	int x[size] = {1, 2, 3, 4, 5};
	cout << "---------------------------------POINTERS AND ARRAYS---------------------------------" << endl;
	// will produce the memory address of the first element in array 'x'
	cout << x + 1 << endl;
	// same as:
	cout << &x[0] << endl;
	// actual value of the first element:
	cout << *x << endl;
	
	// x + 1 = memory address of second element
	// &x[1] = memory address of second element
	// *(x + 1) = actual value located in the memory address of the second element
	cout << x + 1 << " " << &x[1] << " " << *(x + 1) << endl;
	
	// size of integer data type (it means that the memory location will jump by 4 bytes)
	cout << sizeof(int) << endl;
	// memory address of x[0] = 0x6ffde0
	// memory address of x[1] = 0x6ffde4
	// the difference is 4 bytes
	cout << &x[0] << endl;
	cout << &x[1] << endl;
	
	// pointer 'a' will automatically become an array
	int *a = x;
	// same output as using the array 'x'
	cout << a + 1 << " " << &a[1] << " " << *(a + 1) << endl;
	
	return 0;
}
