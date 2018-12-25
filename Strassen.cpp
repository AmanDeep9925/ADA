#include <iostream>

using namespace std;

#define N 2


void input(int Mat[][N]) {

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> Mat[i][j];
		}
	}
}

void output(int Mat[][N]) {

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j) {

			cout << Mat[i][j] << " ";
		}

		cout << "\n";

	}
}

void MUL(int Mat1[][2], int Mat2[][2], int Res[][2]) {
	int m1, m2, m3, m4 , m5, m6, m7;

	m1 = (Mat1[0][0] + Mat1[1][1]) * (Mat2[0][0] + Mat2[1][1]);
	m2 = (Mat1[1][0] + Mat1[1][1]) * Mat2[0][0];
	m3 = Mat1[0][0] * (Mat2[0][1] - Mat2[1][1]);
	m4 = Mat1[1][1] * (Mat2[1][0] - Mat2[0][0]);
	m5 = (Mat1[0][0] + Mat1[0][1]) * Mat2[1][1];
	m6 = (Mat1[1][0] - Mat1[0][0]) * (Mat2[0][0] + Mat2[0][1]);
	m7 = (Mat1[0][1] - Mat1[1][1]) * (Mat2[1][0] + Mat2[1][1]);

	Res[0][0] = m1 + m4 - m5 + m7;
	Res[0][1] = m3 + m5;
	Res[1][0] = m2 + m4;
	Res[1][1] = m1 - m2 + m3 + m6;

	output(Res);
}

int main() {
	int A[N][N], B[N][N], C[N][N];

	input(A);
	// output(A,3,3);

	input(B);
	      // output(B,3,3);

	      MUL(A, B, C);

}