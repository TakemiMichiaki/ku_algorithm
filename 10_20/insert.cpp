#include <bits/stdc++.h>
using namespace std;

void non_decreasing(int *, int);

int main()
{
	int n;
	cin >> n;
	int *A = new int [n];

	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}

	for (int i = 0; i < n; ++i) {
	//for (int i = 0; i < array_length(A); ++i) {
		cout << A[i] << ' ';
	}
	cout << endl;

	non_decreasing(A, n);

	for (int i = 0; i < n; ++i) {
		cout << A[i] << ' ';
	}

	delete[] A;

	cout << endl;

	return 0;
}

void non_decreasing(int *A, int n) 
{
	for (int j = 1; j < n; ++j) {
		int key = A[j];
		int i = j - 1;
		while (i >= 0 && A[i] > key) {
			A[i+1] = A[i];
			--i;
		}
		A[i+1] = key;
		// debug
		for (int i = 0; i < n; ++i) {
			cout << A[i] << ' ';
		}
		cout << endl;
		// debug
	}
}
