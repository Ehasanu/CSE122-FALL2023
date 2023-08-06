#include<iostream>
using namespace std;
int main()
{
    int n,preonty,ehsan,tonmoy;
    int number=0;
    cin>>n;
    while (n--)
    {
        cin>>preonty>>ehsan>>tonmoy;
        if(preonty+ehsan+tonmoy>=2)
        {
            number=number+1;

        }
    }
    cout<<number<<endl;
    return 0;
}
