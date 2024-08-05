#include<iostream>
using namespace std;

int main(){
    int num1, num2, option, res;
    cout << "Calculator..." << endl;
    cout << "Enter the first value: " ;
    cin >> num1;
    cout << "Enter the second value: " ;
    cin >> num2;
    cout<< "Enter the operation : \n1. +\n2. -\n3. /\n4. *\n5. %\nEnter the option number: ";
    

    cin >> option;

    if(option == 1) res = num1 + num2;
    else if(option == 2) res = num1 - num2;
    else if(option == 3) res = num1 / num2;
    else if(option == 4) res = num1 * num2;
    else if(option == 5) res = num1 % num2;
    else cout << "Invalid option"<<endl;

    cout << "Result: " << res; 
    

        
    

    
}