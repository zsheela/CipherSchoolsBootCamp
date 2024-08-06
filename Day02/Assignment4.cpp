#include <iostream>
using namespace std;

int sqrut(int num){
    return num * num;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Square root of the number is: " << sqrut(a);
    
    return 0;
}