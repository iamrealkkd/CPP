#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter your number"<<" ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=i+sum;
    }
    cout<<"sum="<<sum;
    return 0;
}