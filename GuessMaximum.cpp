/*
 * Author: Anees Bazmi
 * Date: November 25, 2023
 * Problem Name:  * problem link : Codeforces Round 951 (Div. 2), problem: (A) Guess the Maximum
 * problem link : https://codeforces.com/contest/1979/problem/A
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
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }   
        int ans = INT_MAX;
        for(int i=1; i<n; i++){
            ans = min(max(arr[i],arr[i-1]),ans); 
        }
        cout<<ans-1<<"\n";
    }
}