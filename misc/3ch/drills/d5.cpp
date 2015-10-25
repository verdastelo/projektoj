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
  cout << "\nI have grown stupid in the past few days. It has slipped out of my mind if " << friend_name << " was a man or a woman. Please enter 'm' if he is a male and 'f' if she is a female.\n"; 
  char c; 
  cin >> c; 
  if (c == 'm') 
    cout << "If you see " << friend_name << " please ask him to call me.\n"; 
  if (c == 'f')
    cout << "If you see " << friend_name << " please ask her to call me.\n"; 
  
  cout << "Do you have an idea how old " << friend_name << " is?\n"; 
  int age = 0; 
  cin >> age; 
  if (age <= 0 || age >= 110)
    cout << "You are kidding.\n"; 
  else
    cout << "I hear you just had a birthday and you are " << age << " years old.\n"; 
  return 0; 
}