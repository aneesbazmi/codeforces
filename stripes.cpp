#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    
    while (t--)
    {
        vector<string> nums(8);    
        for (int i = 0; i < 8; i++)
        {
            string s;
            cin>>s;
            nums[i] = s;
        }
        bool flag = 0;
        for (int i = 0; i < 8; i++)
        {
            
            if(nums[0][i] != '.'){
                char c = nums[0][i];
                for(int j=1; j>=7; j++){
                    if(nums[j][i] !=c ){
                        flag = 0;
                        break;
                    }
                }
                
            }
            
        }       
    }

    return 0;
    
}