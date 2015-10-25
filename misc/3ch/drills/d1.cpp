#include <iostream> 

using namespace std; 

int main() 

{
  //cout << "Please enter your first name (followed by 'enter'):\n";
  //cout << "Как вас зовут?\n"; 
  cout << "Enter the name of the person ou want ot write to.\n"; 
  string first_name; 
  cin >> first_name; 
  cout << "Dear " << first_name << ",\n";
  return 0; 
}