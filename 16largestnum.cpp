#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "First num";
    cin>>a;
    cout << "Second num";
    cin>>b;
    if(a>b){
        cout<<"Greater num is a:"<<a;
    }
    else{
        cout<<"Greater num is b:"<<b;
        return 0;
    }
}