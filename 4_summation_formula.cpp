#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long n, sum;
	cin >> n;
	sum = (n * (n + 1)) / 2;
	cout << sum;
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef x
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//int _t:cin>>_t:while(_t--)
	solve();
}
