#include<iostream>
using namespace std;
int main(){
    double inc;
    double tax;
    cout<<"Enter your income in lakhs" << "";
    cin>>inc;
    if(inc<=5){
        tax=0;
    }
    else if(inc<+10){
        tax=0.2*inc;
    }
    else{
        tax=0.3*inc;
    }
    cout<<"Tax="<<(tax*100000);
    return 0;
}