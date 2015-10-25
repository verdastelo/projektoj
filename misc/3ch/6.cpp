#include <iostream> 
#include <cstring> 

using namespace std; 

int main() 

{
  string name1 = " "; 
  name1 = "Anno"; 
  string name2 = " "; 
  name2 = "Bear"; 
  
  if (name1>name2)
    cout << name1 << " " << name2 << "\n";
  if (name2>name1)
    cout << name2 << " " << name1 << "\n";
  return 0; 
}
