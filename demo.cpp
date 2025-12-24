#include<bits/stdc++.h>

using namespace std;
#define pb push_back
#define ll long long
#define dou double
#define fi first
#define sec second

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,m,p;
		cin >> n>>m>>p;
		ll a[n], b[m], c[p];
		for(int i=0; i<n; i++)	cin >>a[i];
		for(int j=0; j<m; j++)	cin >>b[j];
		for(int k=0; k<p; k++)	cin >>c[k];

		vector<ll> giao;
		int l=0, r=0;
		int found = 0;
		while(l<n && r<m) {
			if(a[l] == b[r]) {
				giao.pb(a[l]);
				++l;
				++r;
			} else if(a[l] < b[r])	++l;
			else ++r;
		}
		l=0,r=0;
		while(l<giao.size() && r<p) {
			if(giao[l] == c[r])	{
				cout << c[r] <<' ';
				found = 1;
				++l;
				++r;
			} else if(giao[l] < c[r])	++l;
			else ++r;
		}
		if(!found)	cout << "-1";
		cout <<endl;
	}
	return 0;
}
