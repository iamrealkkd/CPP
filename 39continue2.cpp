#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i=1;i>0;i++){
        cout<<"Enter your num"<<" ";
        cin>>n;
        if(n%10==0){
            continue;
        }
    cout<<"You entered"<<" "<<n<<endl;
    }
    
}