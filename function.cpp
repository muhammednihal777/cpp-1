// Importing input output stream files 
#include <iostream> 

using namespace std; 

// Methods to print 

// Method 1 
void print(int i) 
{ 

	// Print and display statement whenever 
	// method 1 is called 
	cout << " Here is int " << i << endl; 
} 

// Method 2 
void print(double f) 
{ 

	// Print and display statement whenever 
	// method 2 is called 
	cout << " Here is float " << f << endl; 
} 

// Method 3 
void print(char const* c) 
{ 

	// Print and display statement whenever 
	// method 3 is called 
	cout << " Here is char* " << c << endl; 
} 

// Method 4 
// Main driver method 
int main() 
{ 

	// Calling method 1 
	print(10); 
	// Calling method 2 
	print(10.10); 
	// Calling method 3 
	print("ten"); 

	return 0; 
}

