#include <iostream>
using namespace std;

void decitobinary() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary representation: 0" << endl;
        return;
    }

    string binary = "";
    while (n) {
        binary = char((n % 2) + '0') + binary; 
        n /= 2; 
    }

    cout << "Binary representation: " << binary << endl;
}

int main() {
    decitobinary();
}
