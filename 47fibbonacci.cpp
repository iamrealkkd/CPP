#include<iostream>
using namespace std;
int main(){
    int a, b, c ,sum,till;
    cout<<"How much fibonacci you want"<<" ";
    cin>>till;
    a=0;
    b=1;
    for(int i=1;i<=till;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
cout<<"\n";
}