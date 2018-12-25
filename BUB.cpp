#include<iostream>
using namespace std;

void bub_sort(int A[],int N){
    int temp;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N - i -1; ++j ){
            
            if (A[j] > A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
  
        }
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

    bub_sort(A,size);

    cout <<"\n Array after sorting:";
    put_Arraay(A,size);

    

}