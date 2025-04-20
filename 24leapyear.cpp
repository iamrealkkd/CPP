#include<iostream>
using namespace std;
int main(){
int year;
cout<<"Enter the year: ";
cin>>year;
if(year%400==0){
    cout<<"The year "<<year<<" is a leap year.";
}
else if(year%100==0){
    cout<<"The year "<<year<<" is not a leap year.";
    }
else if(year%4==0){
 cout<<"The year "<<year<<" is a leap year.";
        }
else{
    cout<<"The year "<<year<<" is not a leap year.";
}
return 0;
}