/*
 * Author: Anees Bazmi
 * Date: November 25, 2023
 * Problem Name: Mathematical problem, codeforce, div round 954.
 * problem link : https://codeforces.com/contest/1986/problem/C
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
    
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        
        string a,b;
        cin>>a;
        
        int indx[m+1];
        
        // 1 1 2 4
        for(int i=0; i<m; i++){
            cin>>indx[i];
        }
        cin>>b;
        sort(b.begin(), b.end());
        
        int ar[n+1];
        for(int i=0; i<=n; i++){
            ar[i] = 0;
        }
        for(int i=0; i<m; i++){
            ar[indx[i]] ++;
        }
        
        int taken = 0;
        for(int i=0; i<=n; i++){
            if(ar[i] == 0)
            continue;
            a[i-1] = b[taken];
            taken++;
        }
        
        cout<<a<<"\n";
        
        
    }
    
    
    
}