#include <bits/stdc++.h>
using namespace std;

void solve()
{

	long double x, y;
	cin >> x >> y;
	if (x == 0 && y == 0)
	{
		cout << "Origin";
	}
	else if (x == 0)
	{
		cout << "X-AXIS";
	}
	else if (y == 0)
	{
		cout << "Y-axis";
	}
	else if (x > 0)
	{
		if (y > 0)
			cout << "Q1";
		else
			cout << "Q4";
	}

	else if (x < 0)
	{
		if (y < 0)
			cout << "Q3";
		else
			cout << "q2";
	}
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
