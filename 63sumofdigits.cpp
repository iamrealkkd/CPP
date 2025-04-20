#include<iostream>
using namespace std;

void sumofdigits() {
    int n, r;
    int s = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) { 
        r = n % 10;  // Get the last digit
        s = s + r;   // Add it to the sum
        n = n / 10;  // Remove the last digit
    }
    cout << "Sum of digits: " << s << endl; // Output the sum
}

int main() {
    sumofdigits();
    return 0;
}
