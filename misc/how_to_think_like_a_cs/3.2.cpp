// This program demonstrates some math functions. 

#include <iostream> 
#include <cmath> 

using namespace std; 

int main() 

{
	double x = log(17.0);
	double angle = 1.5; 
	double height = sin (angle); 
	
	cout << "log = " << x << " and the height is " << height << "\n"; 

	double value_of_pi = acos (-1.0); 
	float value_of_pi2 = acos (-1.0); 
	cout << "pi's value is " << value_of_pi << "\n"; 
	cout << "pi's value is (float)" << value_of_pi2 << "\n"; 

	return 0; 
}

