#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long double r, pi;
	pi = acos(-1.0); // cos(pi)=-1; inversing
	cin >> r;
	cout << setprecision(9) << r * r * pi;
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
