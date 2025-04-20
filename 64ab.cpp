#include<iostream>
using namespace std;
int para(int a, int b) {
    int s=a*a+b*b+2*a*b;
    cout<<s;
}     
int main() {
    para(2, 3);
    return 0;
}