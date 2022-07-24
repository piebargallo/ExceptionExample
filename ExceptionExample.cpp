// CPP Program to demonstrate catch all
#include <iostream>
using namespace std;

// Driver code
int main() {
	
	// Def var 
	int x = -1;
	char* ptr;
	
	// Ini array
	ptr = new char[256];
	
	// Block try
	try {

		if (x < 0) {
			throw x;
		}
		
		if (ptr == NULL) {
			throw " ptr is NULL ";
		}
	
	}
	
	// Block catch all
	catch (...) {
		
		cout << "Exception occurred: exiting " << endl;
		exit(0);
	
	}

	getchar();
	
	return 0;

} // End driver
