#include <bits/stdc++.h>
using namespace std;

vector<int> factor(int n) {
	vector<int> ret;

	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ret.push_back(i);
			n /= i;
		}
	}
	if (n > 1) { ret.push_back(n); }
	
	return ret;
}

void solve() {

}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);

    return 0;
}