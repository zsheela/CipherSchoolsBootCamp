#include <iostream>
using namespace std;

int main() {
    
    int n1, n2, n3;
    
    cout << "Enter three numbers: ";
    cin >> n1;
    cin >> n2;
    cin >> n3;
    
    if(n1 > n2 && n1 > n3) cout << n1 << " is greater" << endl;
    else if(n2 > n1 && n2 > n3) cout << n2 <<" is greater";
    else cout << n3 << " is greater";
    return 0;
}