#include <iostream>

using namespace std;

void input(int Mat[][3], int row, int col) {

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cin >> Mat[i][j];
		}
	}
}

void output(int Mat[][3], int row, int col) {

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j) {

			cout << Mat[i][j] << " ";
		}

		cout<<"\n";

	}
}

void MUL(int Mat1[][3], int Mat2[][3],int Res[][3]) {
	
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
		{	Res[i][j] = 0;
			for (int k = 0; k < 3; ++k)
			{
				Res[i][j]+=(Mat1[i][k]*Mat2[k][j]);
			}
		}

		output(Res,3,3);
}

int main(){
	int A[3][3],B[3][3],C[3][3];

	input(A,3,3);
	// output(A,3,3);
	
	input(B,3,3);
	// output(B,3,3);

	MUL(A,B,C);

}