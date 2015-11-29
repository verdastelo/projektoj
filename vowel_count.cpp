/*
    This program counts the number of vowels in a text,
    figures out a vowel-to-consonant ratio,
    and makes an educated guess on which language the
    text is in.
*/

#include <iostream> 
#include <cstring> 

int main()
{
    int count_vowels = 0; 
    int count_consonants = 0;
    
    char text[] = "italiano mio"; 
    for (int i = 0; text[i]; i++) {
        char c = text[i];
        if ((c == 'i') || (c == 'e') || (c == 'a') || (c == 'o') 
            || (c == 'u')) {
            count_vowels++; 
            }  
        else 
            count_consonants++; 
        }
        
    std::cout << count_vowels << std::endl; 
    std::cout << count_consonants << std::endl; 
    return 0;
}
