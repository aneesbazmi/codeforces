#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// int n, t, T, minx, maxx;
    int i, sum = 0;
    int j = 1;

    for(int i=0; i<4; i++){
        sum  = sum  + j;
        if(j % 2 == 0)
            j  =j + 3;
            else
            j++;
    }
    cout<<"s um  "<<sum;
	
	return 0;
}