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
        vector<string> nums(8);
        for (int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;
            nums[i] = s;
        }
        
        bool found = 0;
        char lst;
        for (int i = 0; i < 8; i++)
        {

            if (nums[0][i] != '.')
            {
                char c = nums[0][i];
                
                int j;
                for ( j = 1; j <= 7; j++)
                {
                    if (nums[j][i] != c)
                    {                        
                        break;
                    }
                }
                if(j == 8 and c == 'B'){
                    
                    found = 1; lst = c;
                    break;}
            }
            
        }
        if (found)
        {
            cout << lst<<"\n";
        }
        else
        {cout<<"R\n";

        }

           
    }

    return 0;
}