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
//im in the dark here;

struct _2D {
    vector<vector<long long>> prf;
    int n, m;

    _2D(vector<vector<long long>> &a) {
        prf = a;
        n = (int) a.size();
        m = (int) a[0].size();
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                prf[i][j] += prf[i][j - 1] + prf[i - 1][j] - prf[i - 1][j - 1];
            }
        }
    }

    int query(int x1, int y1, int x2, int y2) {
        long long res = prf[x2][y2] - prf[x2][y1 - 1] - prf[x1 - 1][y2] + prf[x1 - 1][y1 - 1];
        return res;
    }
};

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> matrix(n + 1, vector<long long>(m + 1));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> matrix[i][j];
        }
    }

    _2D prefixSum(matrix);
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);

    int t = 1;
    cin >> t;

    FOR (i, 1, t + 1) {
        solve();
    }
    return 0;
}