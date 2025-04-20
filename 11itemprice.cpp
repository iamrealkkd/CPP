#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter the pencil cost: ";
    cin>>a;
    cout<<"Enter the pen cost: ";
    cin>>b;
    cout<<"Enter the eraser cost: ";
    cin>>c;
    float sum=a+b+c;
    float gst=sum*0.18;
    cout<<"Total cost is="<<a+b+c<<endl;
    cout<<"Total cost with gst="<<gst+a+b+c;
    return 0;
}