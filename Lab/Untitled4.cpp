#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter any 3 numbers=";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"The largest number is "<<a;
    }
    else if(b>c && b>a)
    {
        cout<<"The largest number is "<<b;
    else
    {
        cout<<"The largest number is "<<c;
    }
    return 0;
}
