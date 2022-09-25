#include "bits/stdc++.h"
using namespace std;
int main(){

    int T;
    cin>>T;
    while(T--){
        int n, c;
        cin>>n>>c;
        int a[101];
        for(int i=0; i<101; i++){
            a[i] = 0;
        }
        for(int i=0; i<n; i++){
            int p;
            cin>>p;
            a[p] ++;
        }
        int ans =0;
        for(int i=0; i<101; i++){
            if(a[i] != 0){
                if( c < a[i]){
                        ans = ans + c;

                }
                else   
                    ans+=a[i];
            }
        }
        cout<<ans<<"\n";

    }

    return 0;
}