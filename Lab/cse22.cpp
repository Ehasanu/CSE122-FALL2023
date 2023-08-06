#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while (n--)
    {
        string s; cin>> s;
    int count=0;
    count=s.size();
    if(count<=10) cout<<s<<endl;
    else cout<<s[0]<<count-2<<s[s.size()-1]<<endl;
    }

    return 0;
}
