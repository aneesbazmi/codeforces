/*
 * Author: Anees Bazmi
 * Date: November 25, 2023
 * Problem Name: Yarrik and Array
 * problem link : https://codeforces.com/contest/1899/problem/C
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int mx = 0;
        int sum = arr[0];
        mx = sum;

        for (int i = 1; i < n; i++)
        {
            if (sum > mx)
            {
                mx = sum;
            }

            if (arr[i - 1] % 2 == 0 and arr[i] % 2 == 0)
            {
                sum = arr[i];
                continue;
            }
            else if (arr[i - 1] % 2 != 0 and arr[i] % 2 != 0)
            {
                sum = arr[i];
                continue;
            }
            else if (arr[i - 1] == 0 and arr[i] == 0)
            {
                sum = arr[i];
                continue;
            }

            if (sum < 0 and arr[i] > sum)
            {
                sum = arr[i];
            }
            else
                sum += arr[i];
        }

        if (sum > mx)
        {
            mx = sum;
        }

        cout << mx << "\n";
    }

    return 0;
}
