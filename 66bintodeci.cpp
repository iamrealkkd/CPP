#include<iostream>
using namespace std;

void bintodeci() {
    int n;
    int r;
    int power=1;
    int s = 0;
    cout << "Enter a binary number: ";
    cin >> n;
    while (n > 0) { 
        r = n % 10;
        s+=r*power;
        power=power*2;
        n = n / 10;
    }
    cout<<s;
}

int main() {
    bintodeci();
    return 0;
}
