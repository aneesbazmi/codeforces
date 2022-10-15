#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n, t, T, minx, maxx;
	cin>>T;

	for(int i = 0; i < T; i++){

		cin>>n;
		vector<int>x(n, 0);
		minx = INT_MAX, maxx = INT_MIN;

		for(int i = 0; i < n; i++)
			cin>>x[i];
		
		for(int i = 0; i < n; i++){

			cin>>t;

			maxx = max(maxx, x[i] + t);
			minx = min(minx, x[i] - t);
		}

		cout<<(maxx + minx)/2;
		if((maxx + minx) % 2 ) cout<<".5";
		cout<<"\n";
	}

	return 0;
}