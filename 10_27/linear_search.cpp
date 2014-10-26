#include <bits/stdc++.h>
using namespace std;

int linear_search(int *, int n, int v);

int main()
{
	int n;
	cin >> n;

	int *A = new int [n];
	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}

	int v;
	cin >> v;

	cout << linear_search(A, n, v) << endl;

	delete[] A;

	return 0;
}

int linear_search(int *A, int n, int v)
{
	int i;

	for (i = 0; i < n; ++i) {
		if (v == A[i]) {
			return i;
		}
	}

	return 0;
}
