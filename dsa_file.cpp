#include<iostream>
using namespace std;
int main() {
    int a,b,c,n;
    cin>>n>>a>>b;
    if (n==1)
     c=a+b;
     else if (n==2)
     c=a-b;
     else if (n==3)
     c=a*b;
     else if (n==4)
     c=a/b;
     else
     cout<< "plese enter a number ";
     cout<<c;
     return 0;
}
