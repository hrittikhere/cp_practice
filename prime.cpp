If x is a divisor of N, then N/x is also a divisor of N. Either x ≤ √N or N/x ≤ √N. So we iterate from 1 to √N to check if it is a prime.

Time Complexity per test case: O(√N)

 

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool is_prime = 1;
        for (int i = 2; i*i <= n; ++i) {
            if(n%i == 0) {
                is_prime = 0;
            }
        }
        if(n==1 || is_prime == 0) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}
