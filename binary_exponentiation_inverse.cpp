// binary_exponentiation_inverse

#include <bits/stdc++.h>
using namespace std;
// #define int long long     can use this instead of 1ll
int binary_exponentiation(int a, int b, int mod)
{
    int ans = 1;
    while (b) // while b is positive
    {
        if (b % 2 == 1) // last bit (eg: 1000101) odd or not
        {
            ans = (1LL * ans * a) % mod; // type casting to long long
        }
        a = (1LL * a * a) % mod; // multiplying a with a
        b /= 2;                  // moving on with the next digit 100010 (1 is dropped)
    }
    return ans;
}

signed main()
{
    int a;
    cin >> a;
    cout << binary_exponentiation(a, 1e9 + 7 - 2, 1e9 + 7) << "\n";
}
