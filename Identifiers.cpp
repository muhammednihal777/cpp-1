#include <iostream> 
using namespace std; 
  
// here Car_24 identifier is used to refer the below class 
class Car_24 { 
    string Brand; 
    string model; 
    int year; 
}; 
  
// calculateSum identifier is used to call the below 
// function 
void calculateSum(int a, int b) 
{ 
    int _sum = a + b; 
    cout << "The sum is: " << _sum << endl; 
} 
  
int main() 
{ 
    // identifiers used as variable names 
    int studentAge = 20; 
    double accountBalance = 1000.50; 
    string student_Name = "Karan"; 
  
    calculateSum(2, 10); 
  
    return 0; 
}
