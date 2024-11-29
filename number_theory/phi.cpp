#include <bits/stdc++.h>
using namespace std;


const int N = 1000005;
int phi(int n) {
	int ans = n;

	for (int p = 2; p * p <= n; p++) {
		if (n % p == 0) {
			while (n % p == 0) { n /= p; }
			ans -= ans / p;
		}
	}

	if (n > 1) { ans -= ans / n; }
	return ans;
}

vector<int> p(N);
void precompute() {
	for (int i = 1; i < N; i++) { p[i] = i; }
	for (int i = 2; i < N; i++) {
		// If i is prime
		if (p[i] == i) {
			for (int j = i; j < N; j += i) { p[j] -= p[j] / i; }
		}
	}
}

void solve() {

}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);

    return 0;
}