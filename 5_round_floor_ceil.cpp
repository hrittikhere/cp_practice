#include <bits/stdc++.h>
using namespace std;

void solve()
{
int a,b;
cin>>a>>b;
cout<<a/b<<'\n'; //floor
cout<<(a+b-1)/b<<'\n'; //ceil 
cout<<(2*a+b)/(2*b); //round
//a,b must be intger for things to work
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
