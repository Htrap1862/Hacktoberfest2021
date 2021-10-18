#include<iostream>
using namespace std;

void Merge(int A[], int low, int mid, int high)
{
    int i = low;
    int j = mid+1;
    int k = low;
    int B[high+1];

    while (i <= mid && j <= high){
        if (A[i] < A[j]){
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid){
        B[k++] = A[i++];
    }
    while (j <= high){
        B[k++] = A[j++];
    }
    for (int i=low; i<=high; i++){
        A[i] = B[i];
    }
}

void MergeSort(int A[], int l, int h)
{
    int mid;
    if(l < h)
    {
        mid = (l+h)/2;
        MergeSort(A, l, mid);
        MergeSort(A, mid+1, h);
        Merge(A, l, mid, h);
    }
}
int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    MergeSort(A, 0, n-1);

    cout << "Sorted array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}