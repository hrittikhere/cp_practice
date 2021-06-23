#include <bits/stdc++.h>
using namespace std;
void solve()
{
	// a       i       q       y
	//  b     h j     p r     x z
	//   c   g   k   o   s   w
	//    d f     l n     t v
	//     e       m       u
	// for left diagonal (which starts at 1,1); i=j always becuase i-j=constant
	// for right diagonal (which ends at end,end); i+j=constant 
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (i == j % 8 || (i + (j % 8) == 8))
			{
				cout << char('a' + j);
			}
			else
			{
				cout << " ";
			}
		}
		cout << '\n';
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
