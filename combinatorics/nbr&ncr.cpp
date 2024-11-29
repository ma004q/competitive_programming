#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) begin(x), end(x)
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
using namespace std;

const int N = 200000;
const int M = 1000000007;


long long fac[N + 1];
long long inv[N + 1];

/** @return x^n modulo m in O(log n) time. */
long long exp(long long x, long long n, long long m) {
    x %= m;
    long long res = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            res = res * x % m;
        }
        x = x * x % m;
        n /= 2;
    }
    return res;
}

/** Precomputes factorials from 0 to N modulo p. */
void factorial(long long p) {
    fac[0] = 1;
    for (int i = 1; i <= N; ++i) {
        fac[i] = fac[i - 1] * i % p;
    }
}

/** Precomputes modular inverses of factorials from 0 to N modulo p. */
void inverses(long long p) {
    inv[N] = exp(fac[N], p - 2, p);
    for (int i = N - 1; i >= 0; --i) {
        inv[i] = inv[i + 1] * (i + 1) % p;
    }
}

/** @return nCr mod p */
long long ncr(long long n, long long r, long long p) {
    if (r > n || r < 0) return 0;
    return fac[n] * inv[r] % p * inv[n - r] % p;
}

/** @return nPr mod p */
long long npr(long long n, long long r, long long p) {
    if (r > n || r < 0) return 0;
    return fac[n] * inv[n - r] % p;
}

void solve() {

}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    factorial(M);
    inverses(M);

    int t = 1;
    cin >> t;

    FOR (i, 1, t + 1) {
        solve();
    }

    return 0;
}
