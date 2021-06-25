// Description

// You are given an array A. One random element is removed from A to form array B and one random element is removed from B to form array C. You have to find the missing element in B and the missing element in C.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

// The first line of each test case contains one integer N - the length of the array. 

// The second line of each test case contains N space-separated integers - array A.

// The third line of each test case contains (N-1) space-separated integers - array B.

// The fourth line of each test case contains (N-2) space-separated integers - array C.


// Output Format

// For each test case, print the missing element in B and the missing element in C.
  
// 3
// 4
// 1 3 5 2
// 5 1 3
// 5 1
// 5
// 1 3 5 1 0
// 3 1 1 5
// 1 1 5
// 3
// 1 2 3
// 3 1
// 1







#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        int length;
        int first = 0;
        int second = 0;
        int third = 0;
        cin >> length;
        for (int i = 0; i < length; i++)
        {
            int x;
            cin >> x;
            first ^= x;
        }
        for (int i = 0; i < length - 1; i++)
        {
            int x;
            cin >> x;
            second ^= x;
        }
        for (int i = 0; i < length - 2; i++)
        {
            int x;
            cin >> x;
            third ^= x;
        }
        cout << (first ^ second)<< " " << (third ^ second)<<"\n";
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
