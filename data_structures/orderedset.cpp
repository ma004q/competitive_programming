#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) begin(x), end(x)
using namespace std;

#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
//im in the dark here;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int , null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update> Ordered_Set; // find_by_order : element at index i
// order_of_key  : how many elements < A
// greater<int>
// less_equal<int>, greater_equal<int> : multiset

const int N = 2e5 + 5, M = 1e9 + 7;

void solve() {

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