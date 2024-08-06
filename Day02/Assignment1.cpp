#include <iostream>
using namespace std;

int main() {
    
    char ch ;
    cout << "Enter the character to check: ";
    cin >> ch;
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout << "Entered character is a vowel";
    }
    else if(ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U'){
        cout << "Entered character is a vowel";
    }
    else{
        cout << "Entered character is a consonent";
    }
    return 0;
}