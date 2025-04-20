#include<iostream>
using namespace std;
int main(){
    float percentage;
    cout<<"Enter Percentage";
    cin>>percentage;
    if(percentage>90){
        cout<<"Grade A+";
    }
    else if(percentage>60){
        cout<<"Grade A";
    }
    else{
        cout<<"Grade C";
    }
}