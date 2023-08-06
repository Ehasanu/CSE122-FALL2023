#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     int sum=0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a==1&& b==1){
            sum++;
        }
        else if(a==1&&c==1){
            sum++;
        }
        else if(b==1&&c==1){
            sum++;
        }

    }
    cout<<sum;
}
