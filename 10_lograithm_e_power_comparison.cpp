#include <bits/stdc++.h>
using namespace std;

void solve()
{
	// b^a is greater than d^c? Using logarithm as range for input is big and so exponential growth would be bigger than variable can store.
	long double a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a * log(b) > c * log(d)) // ADD 1e-12/1e-9 after c*log(d) to make sure you're not facing storage errors in very high precision points.
	{
		cout << "First Power is Big";
	}
	else
	{
		cout << "Second Number is Bigger";
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
