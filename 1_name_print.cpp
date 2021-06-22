#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a;
	cin >> a;
	string temp, name;
	getline(cin, temp); //dummy getline for the extra space issue formed by getline()
	while (a >= 1)
	{
		getline(cin, name);
		cout << "Hi it's " << name << "! \n";
		a -= 1;
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
