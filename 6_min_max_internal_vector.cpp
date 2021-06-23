#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << "Min = " << min({a, b, c}) << "\n"
		 << "Max = " << (max({a, b, c})); //creating internal vector instead of min(a,min(b,c))
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
