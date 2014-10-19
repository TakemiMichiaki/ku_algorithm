#include <bits/stdc++.h>
using namespace std;

template
<
	typename TYPE,
	std::size_t SIZE
>

std::size_t array_length(const TYPE (&array)[SIZE])
{
	return SIZE;
}

int main()
{
	int n;
	cin >> n;
	int A[n];

	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}

	for (int i = 0; i < sizeof(A)/sizeof(A[0]); ++i) {
		cout << A[i] << ' ';
	}
	cout << endl;

	for (int j = 1; j < sizeof(A)/sizeof(A[0]); ++j) {
		int key = A[j];
		int i = j - 1;
		while (i >= 0 && A[i] > key) {
			int tmp = A[i];
			A[i+1] = A[i];
			--i;
		}
		A[i+1] = key;
		// debug
		for (int i = 0; i < sizeof(A)/sizeof(A[0]); ++i) {
			cout << A[i] << ' ';
		}
		cout << endl;
		// debug
	}

	for (int i = 0; i < sizeof(A)/sizeof(A[0]); ++i) {
		cout << A[i] << ' ';
	}

	cout << endl;

	return 0;
}
