#include <iostream> 

using namespace std; 

int main() 

{
  cout << "ਦੂਰੀ ਨੂੰ ਮੀਲਾਂ ਵਿਚ ਲਿੱਖੋ।\n"; 
  float miles = 0.0; 
  while (cin >> miles) {
    cout << "ਤੁਸੀ " << miles << " ਮੀਲ ਐਨਟਰ ਕੀਤੇ ਹਨ ਜੋ ਕਿ " << miles*1.609 << " ਕਿਲੋਮੀਟਰਾਂ ਦੇ ਬਰਾਬਰ ਹਨ।\n";
    }
  return 0; 
}
  
  