#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        sort(nums.begin(), nums.end());
        bool flag=  1;
        for (int i = 0; i < n-1; i++)
        {
            if(nums [i]  == nums[i+1]){
                flag = 0;
                break;
            }
        }
        if(flag)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        
    }

    return 0;
    
}