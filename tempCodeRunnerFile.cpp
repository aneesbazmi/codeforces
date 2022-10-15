#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
	cin>>T;
    while(T--){
        int n;
        cin>>n;
        map <int, int> fre;
        for(int i=0; i<n; i++){
            int a; 
            cin>>a;
            fre[a]++;
        }
        int ans = 0;
        bool flag = true;
        while(flag){
            flag = false;
            for (auto i : fre){
                if(fre[i.first] > 1){
                    flag = true;
                    fre[i.first]--;
                }
            }
            if(flag)
                ans ++;
            else 
            break;


        }
        cout<<ans<<"\n";
        
    }


	return 0;
}