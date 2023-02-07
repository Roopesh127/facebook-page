#include<iostream>
using namespace std;
class A
{
 int a,b,c;
 public:
 void table()
 {
    cout<<"Enter a number";
    cin>>a;
    for(b=1;b<=170;b++)
    {
        c=a*b;
        cout<<a<<"*"<<b<<"="<<c<<endl;

    }
 }
};
int main()
{
    A obj;
    obj.table();
    
}