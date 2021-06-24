
/* Description

You are given an array of N integers. The frequency of exactly one integer is odd. Find that integer.


Input Format

The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

The first line of each test case contains one integer N - the length of the array. 

The second line of each test case contains N space-separated integers.


Output Format

For each test case, print the integer with odd frequency.


Sample Input
3
5
2 5 5 7 2
3
2 1 2
5
0 1 2 1 0 */








#include <bits/stdc++.h>
using namespace std;
void solve()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			ans ^= x;
			// element xor itself =0 so suppose:
			// we have 4 elements 1,2,2,1 then one by one everything would be 0
			// We have 5 elements 1,2,2,3,1 then everything would become 0 except 3 and thus you can find the odd occurances

			// Video explanation: https://www.youtube.com/watch?v=2Bn5uBnmptU
		}
		cout << ans << "\n";
	}
}

// signed main()
// {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	cout.tie(0);
// 	solve();
// }

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
