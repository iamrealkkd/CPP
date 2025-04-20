#include<iostream>
using namespace std;
int main(){
    int n,r,temp,sum=0;
    
    cout<<"Enter your num"<<" ";
    cin>>n;
    temp=n;
    for(int i;i>0;i++){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==temp){
        cout<<"Armstrong!";
    }
    else{
        cout<<"Not a Armstrong";
    }
}