#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a+b == c or a+c==b or  b+c ==a){
            cout<<"YES\n";
        }
        else
        cout<<"No\n";
    }

    return 0;
    
}