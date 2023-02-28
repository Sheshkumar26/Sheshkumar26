#include <iostream>
using namespace std;

int main() {
    int a, b, r, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> a;
    b = a;

    while (b != 0) {

        r = b % 10;
        
        result += r * r * r;
        

        b /= 10;
    }

    if (result == a)
        cout << a << " is an Armstrong number.";
    else
        cout << a << " is not an Armstrong number.";

    return 0;
}

	
	
	
	

