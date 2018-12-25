#include <iostream>
using namespace std;

void merge(int A[], int beg, int mid, int end) {
	int  p = beg, q = mid + 1;
	int Arr[end - beg + 1], k = 0;

	for(int  i = beg; i <= end; ++i){
		if(p > mid){
			Arr[k++] = A[q++]; 
		}
		else if(q > end){
			Arr[k++] = A[p++];
		}
		else if(A[p] < A[q]){
			Arr[k++] = A[p++];
		}
		else{
			Arr[k++] = A[q++];
		}
	}

	for (int i = 0; i < k; ++i)
	{
		A[beg++] = Arr[i];
	}
}

void merge_sort(int A[],int beg,int end){
	if(beg < end){
		int mid = (beg + end)/2;

		merge_sort(A,beg,mid);
		merge_sort(A,mid+1,end);
		merge(A,beg,mid,end);
	}
}

void put_Arraay(int A[],int N){
    
    for(int  i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    
}

void get_Array(int A[],int N){
    
    for(int  i = 0; i < N; i++)
    {
        cin >> A[i] ;
    }
    
}

int main(){
    int A[10], size;

    cout << " \n Enter the size of the array : ";
    cin >> size;
    int beg = 0,end = size -1;

    cout << "\n Enter elements of the array : ";
    get_Array(A,size);

    cout << "\n Array is as :  ";
    put_Arraay(A,size);

    merge_sort(A,beg,end);

    cout <<"\n Array after sorting : ";
    put_Arraay(A,size);

    

}