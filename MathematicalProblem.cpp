/*
 * Author: Anees Bazmi
 * Date: November 25, 2023
 * Problem Name: Mathematical problem, codeforce, div round 954.
 * problem link : https://codeforces.com/contest/1986/problem/D
 * 
 * In Loving Memory of My Mother
 * Shamim Akhtar
 * (September 19, 1968 - June 8, 2023)
 * 
 * This code is dedicated to the loving memory of my mother, Shamim Akhtar. Her kindness, strength, and love will forever inspire me. 
 * May her soul rest in peace.
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s.size() <3){
            cout<<stoi(s)<<"\n";
            continue;
        }
        int ans = INT_MAX;
        for(int i=0; i<n-1; i++){
            vector<int> results;
            for(int j = 0; j<i; j++)
            results.push_back(s[j]- '0');
            results.push_back(stoi(s.substr(i,2)));
            for(int j =i+2; j<n; j++)
            results.push_back(s[j]- '0');
            
            
            sort(results.begin(), results.end());
            
            if(results[0] == 0)
            ans = 0;
            int sum = 0;
            
            for(int i=0; i<results.size(); i++){
                if(results[i] != 1)
                    sum +=results[i];
            }
            if(sum  == 0)
            sum = 1;
            ans = min(sum, ans);
        }
        cout<<ans<<"\n";
    }
}