#include <bits/stdc++.h>
using namespace std;

int maxIncSubarr(int a[], int n)
{

	int x[n] = { 0 };
	int y[n] = { 0 };
	x[0] = 1;
	y[n - 1] = 1;
	int l = 0;

	for (int i = 1; i < n; i++) {
		if (a[i] > a[i - 1])
			x[i] = x[i - 1] + 1;
		else
			x[i] = 1;
	}

	l = 1;
	for (int i = n - 2; i >= 0; i--) {
		if (a[i] < a[i + 1])
			y[i] = y[i + 1] + 1;
		else
			y[i] = 1;
	}


	int ans = 0;
	l = 1;

	for (int i = 1; i < n; i++) {
		if (a[i] > a[i - 1])
			l++;
		else
			l = 1;
		ans = max(ans, l);
	}

	for (int i = 1; i <= n - 2; i++) {
		if (a[i - 1] < a[i + 1])
			ans = max(x[i - 1] + y[i + 1], ans);
	}

	return ans;
}

int main()
{
	int arr[] = { 1, 2 };
	int n = sizeof(arr) / sizeof(int);

	cout << maxIncSubarr(arr, n);

	return 0;
}
