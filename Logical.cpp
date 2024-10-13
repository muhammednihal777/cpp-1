#include <iostream> 
using namespace std; 
  
int main() 
{ 
  
    // initialize variables 
    int age = 25; 
    bool isStudent = true; 
  
    // Using AND operator in if condition 
    if (age > 18 && isStudent) { 
        cout << "You are eligible for a student discount."
             << endl; 
    } 
    else { 
        cout << "You are not eligible for a student "
                "discount."
             << endl; 
  
        return 0; 
    }
