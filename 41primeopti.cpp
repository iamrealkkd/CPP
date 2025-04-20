#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool isPrime = true; // Assume the number is prime

    // Check for divisors
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) { // Found a divisor
            isPrime = false; // Number is not prime
            break; // No need to check further
        }
    }

    // Output the result
    if (isPrime && n > 1) {
        cout << "The number is prime";
    } else {
        cout << "The number is not prime";
    }

    return 0;
}
