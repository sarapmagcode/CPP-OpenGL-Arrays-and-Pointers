#include <iostream>
#define SIZE 100
#define CS0045 cout

using namespace std;

/*	
	Class Notes:
	- global variables are automatically initialized (in C/C++)
	- OpenGL is not object-oriented (no method overloading)
	
*/

int main() {
	const int size = 100;
	int x[size];
	for (int i = 0; i < size; i++) {
		CS0045 << x[i] << endl;
	}
	return 0;
}
