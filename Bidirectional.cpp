#include<iostream> 
#include<list> 
using namespace std; 
int main() 
{ 
    list<int>v1 = {1, 2, 3, 4, 5}; 
  
    // Declaring an iterator 
    list<int>::iterator i1; 
  
    for (i1=v1.begin();i1!=v1.end();++i1) 
    { 
        // Assigning values to locations pointed by iterator 
        *i1 = 1; 
    } 
  
    for (i1=v1.begin();i1!=v1.end();++i1) 
    { 
        // Accessing values at locations pointed by iterator 
        cout << (*i1) << " "; 
    } 
      
    return 0; 
} 
