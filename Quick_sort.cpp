#include <iostream>
using namespace std;

int Partition(int A[], int beg, int end) {

	int i = beg + 1, piv = A[beg];
	int temp_0, temp_1;

	for (int j = beg + 1; j <= end; ++j)
	{
		if (A[j] < piv) {
			swap(A[j],A[i]);
			++i;
		}
	}
	swap(A[beg],A[i-1]);

	return i - 1;
}

void Quick_Sort(int A[], int beg, int end) {
	if (beg < end) {
		int piviot = Partition(A, beg, end);
		Quick_Sort(A, beg, piviot-1);
		Quick_Sort(A, piviot + 1, end);
	}
}

void put_Arraay(int A[], int N) {

	for (int  i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}

}

void get_Array(int A[], int N) {

	for (int  i = 0; i < N; i++)
	{
		cin >> A[i] ;
	}

}

int main() {
	int A[10], size;

	cout << " \n Enter the size of the array : ";
	cin >> size;
	int beg = 0, end = size - 1;

	cout << "\n Enter elements of the array : ";
	get_Array(A, size);

	cout << "\n Array is as :  ";
	put_Arraay(A, size);

	Quick_Sort(A,beg,end);

	cout << "\n Array after sorting :";
	put_Arraay(A, size);



}