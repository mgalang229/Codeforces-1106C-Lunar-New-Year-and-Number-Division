#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	// sort the sequence in non-decreasing order
	sort(a + 1, a + n + 1);
	long long ans = 0;
	for (int i = 1; i <= n / 2; i++) {
		// group the smallest and largest elements, second smallest and second largest elements, etc.
		ans += 1LL * (a[i] + a[n - i + 1]) * (a[i] + a[n - i + 1]);
	}
	cout << ans << '\n';
	return 0;
}
