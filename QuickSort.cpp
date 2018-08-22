#include<bits/stdc++.h>
using namespace std;

int partitions(int A[],int start,int end)
{
    int pivot = A[end];
    int pIndex = start;
    for(int i=start;i<end;i++)
    {
        if(A[i]<pivot)
        {
            swap(A[i],A[pIndex]);
            pIndex++;
        }
    }
    swap(A[pIndex],A[end]);
    return pIndex;
}

void QuickSort(int A[],int start,int end)
{
    if(start<end)
    {
        int pindex = partitions(A,start,end);
        QuickSort(A,start,pindex-1);
        QuickSort(A,pindex+1,end);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of list you want to sort? "<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the list ? "<<endl;
    for(int i = 0; i<n;i++)
        cin>>A[i];
    QuickSort(A,0,n);
    for(int i = 0; i<n;i++)
        cout<<A[i]<<" ";

    return 0;
}
