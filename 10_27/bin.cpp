#include <bits/stdc++.h>
using namespace std;

int main()
{
	string A, B;
	cin >> A;
	cin >> B;

	int *carry, *result;

	carry = new int [B.length()+1];
	result = new int [B.length()+1];

	int a, b;
	carry[A.length()] = 0;

	for (int i = A.length()-1; i >= 0; --i) {
		a = (int)(A[i] - '0');
		b = (int)(B[i] - '0');
		result[i+1] = a^b^carry[i+1];
		//cout << result[i+1] << ' ';
		carry[i] = (a&b || b&carry[i+1] || carry[i+1]&a);
		//cout << carry[i] << endl;
		//cout << result[i];
	}
	result[0] = carry[0];
	cout << endl;
	cout << ' ' << A << endl;
	cout << ' ' << B << endl;
	
	for (int i = 0; i < A.length()+1; ++i) {
		cout << result[i]; 
	}
	cout << endl;

	delete carry;
	delete result;

	return 0;
}
