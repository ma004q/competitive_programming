#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
using namespace std;

template<typename T, class fun>
class SparseTable {
public:
    int n;
    vector<vector<T>> sp;
    fun merge;

    SparseTable(const vector<T> &a, const fun &merge) : merge(merge) {
        n = (int) a.size();
        int max_log = 32 - __builtin_clz(n);
        sp.assign(max_log, vector<T>(n));
        sp[0] = a;
        for (int j = 1; j < max_log; ++j) {
            for (int i = 0; i + (1 << j) <= n; ++i) {
                sp[j][i] = merge(sp[j - 1][i], sp[j - 1][i + (1 << (j - 1))]);
            }
        }
    }

    T query(int l, int r) const {
        int lg = __lg(r - l + 1);
        return merge(sp[lg][l], sp[lg][r - (1 << lg) + 1]);
    }
};

void solve() {

}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin >> t;
    FOR(i, 1, t + 1) {
        solve();
    }

    return 0;
}
