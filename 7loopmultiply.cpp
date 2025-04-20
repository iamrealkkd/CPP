#include<iostream>
using namespace std;
int main()
{
int n;
int multiply;
cout<<"Enter the Number";
cin>>n;
for(multiply=1;multiply<=10;multiply++){
  cout<<n<<'*'<<multiply<<"="<<(multiply*n)<<endl;
}
return 0;
}