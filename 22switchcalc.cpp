#include<iostream>
using namespace std;
int main() {
    int a;
    int b;
    int choice;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    cout<<"Enter 1 for add"<<endl;
    cout<<"Enter 2 for sub"<<endl;
    cout<<"Enter 3 for mul"<<endl;
    cout<<"Enter 4 for div"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    switch(choice){
        case 1:cout<<a+b;
        break;
        case 2:cout<<a-b;
        break;
        case 3:cout<<a*b;
        break;
        case 4:cout<<a/b;
        break;
        default:cout<<"Invalid choice";
        return 0;


    }

}