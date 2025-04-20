#include<iostream>
using namespace std;
int main()
{
    int n;
    int fact=1;
    cout<<"Enter the no.";
    cin>>n;
for(int i=1;i<=n;i++){
    fact*=i;
}
cout << "factorial of " << n << " = " << fact << "\n";


    return 0;
}