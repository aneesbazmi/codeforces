/*
 * Author: Anees Bazmi
 * Date: November 25, 2023
 * Problem Name: Yarrik and Array
 * problem link : https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
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

class Solution {
public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) {
        int i = 0;
        for (int i = 0; i < n; i++) {
            while (arr[i] <= n and arr[i] > 0 and arr[i] != arr[arr[i] - 1]) {
                int t = arr[i];
                arr[i] = arr[arr[i] - 1];
                arr[t - 1] = t;
            }
        }

        for (int a = 0; a < n; a++) {
            if (arr[a] != a + 1)
                return a + 1;
        }

        return n + 1;
    }
};

// { Driver Code Starts
int missingNumber(int arr[], int n);

int main() {
    // taking testcases
    int t;
    cin >> t;
    while (t--) {
        // input number n
        int n;
        cin >> n;
        int arr[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;

        // calling missingNumber()
        cout << ob.missingNumber(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
