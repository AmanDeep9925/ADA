#include <iostream>
using namespace std;

void insertion(int A[], int N) {

	for (int i = 0; i < N; ++i) {
		int temp = A[i];
		int pos = i - 1;

		while( pos >= 0 && A[pos] > temp ){
			A[pos + 1] = A[pos];
			pos =  pos - 1;
		}
		A[pos + 1] = temp;
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

    cout << "\n Enter elements of the array: ";
    get_Array(A,size);

    cout << "\n Array is as :  ";
    put_Arraay(A,size);

    insertion(A,size);

    cout <<"\n Array after sorting:";
    put_Arraay(A,size);

    

}