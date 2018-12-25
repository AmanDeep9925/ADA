#include <iostream>
#include <limits.h>
using namespace std;

int MCM(int P[], int n) {
	int m[n][n];

	int i, j, k, L, q;

	for (i = 1; i < n; ++i)
	{
		m[i][i] = 0;
	}

	for (L = 2; L < n; ++L) {
		for ( i = 1; i < n - L + 1; ++i) {
			j = i + L - 1;
			m[i][j] = INT_MAX;

			for (int k = i; k <= j - 1; ++k)
			{
				q = m[i][k] + m[k+1][j] + P[i-1]*P[k]*P[j];
				if (q < m[i][j])
				{
					m[i][j] = q;
				}
			}
		}
	}

	return m[1][n-1];
}

int main(){
	int arr[] = {40, 20, 30, 10, 30};
	int size = sizeof(arr)/sizeof(arr[0]);

	cout << "Minimum  Number Of Multiplication Is " << MCM(arr,size);
}