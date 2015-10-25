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
  cout << "\tHow are you? I am fine. I miss you. I will continue to miss you when you will be out there in Europe. O! How much I love you, my himesama!\n";
  string friend_name; 
  cout << "\nDo you remember our mutual friend?.. Her name is \n";
  cin >> friend_name; 
  cout << "\nBy the way, have you seen " << friend_name << " lately?\n";
  return 0; 
}