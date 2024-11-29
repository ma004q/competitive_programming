#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int n) {
    vector<int> ret;
    
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i != n / i) {
                ret.push_back(n / i);
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