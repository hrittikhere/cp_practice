#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long x, y;
	cin >> x >> y;
	cout << x << "+" << y << " = " << x + y << '\n';
	cout << x << "-" << y << " = " << x - y << '\n';
	cout << x << "*" << y << " = " << 1ll * x * y << '\n'; 
  //either use long long in input or you can use 1LL for specific manipulations for type casting.
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
