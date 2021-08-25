#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the sequence in non-decreasing order
	sort(a.begin(), a.end());
	long long ans = 0;
	for (int i = 0; i < n / 2; i++) {
		// calculate the sum of the element and its corresponding partner from the end side
		long long sum = (long long) a[i] + a[n - 1 - i];
		// square the calculated sum and get its summation
		ans += (sum * sum);
	}
	cout << ans << '\n';
	return 0;
}
