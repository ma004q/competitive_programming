#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int N = 1000005;

vector<int> spf(int N) {
    vector<int> ret(N);
    iota(ret.begin(), ret.end(), 0);

    for (int i = 2; i * i <= N; ++i) {
        if (ret[i] == i) { 
            for (int j = i * i; j <= N; j += i) {
                if (ret[j] == j) {
                    ret[j] = i;
                }
            }
        }
    }
    
    return ret;
}

void solve() {

}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);

    return 0;
}