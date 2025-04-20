#include<iostream>
using namespace std;

int ch(char a) {
    a++;
    cout << a << endl; 
    return a; 
}

int main() {
    ch('a'); 
    return 0;
}
