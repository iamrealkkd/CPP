#include<iostream>
using namespace std;
int main(){
    int n=10829;
    int digisum=0;
    while(n>0){
        int lastd=n%10;
        digisum+=lastd;
        n=n/10;
    }
cout<<"sum="<<digisum;
}