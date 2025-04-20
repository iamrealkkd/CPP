#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter the value of principle amount: ";
    cin>>p;
    cout<<"Enter the value of rate of interest: ";
    cin>>r;
    cout<<"Enter the value of time: ";
    cin>>t;
    float si=p*r*t/100;
    cout<<"Simple Interest is: "<<si;
    return 0;
}