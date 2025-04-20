#include<iostream>
using namespace std;

void palindrome() {
    int n;
    int r;
    int s = 0;
    cout << "Enter a number: ";
    cin >> n;
    int k = n;
    while (n > 0) { 
        r = n % 10;
        s = r + (s * 10);
        n = n / 10;
    }
    if (k == s) {
        cout << "The number is a palindrome";
    } else {
        cout << "The number is not a palindrome";
    }
}

int main() {
    palindrome();
    return 0;
}
