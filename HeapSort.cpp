#include<bits/stdc++.h>
using namespace std;
# define MAX 100
void max_heapify(int a[],int i,int n){
 int L,R,largest;
 L=2*i;
 R=2*i+1;
 if(L<=n && a[L]>a[i])
   largest=L;
 else
   largest=i;
 if(R<=n && a[R]>a[largest])
   largest=R;
 if(largest!=i)
 {
   int temp=a[largest];
   a[largest]=a[i];
   a[i]=temp;
   max_heapify(a,largest,n);
 }
}

void build_heap(int a[],int n){
 for(int i=n/2;i>=1;i--){
  max_heapify(a,i,n);
 }
}

void heap_sort(int a[],int n){
  build_heap(a,n);
  for(int i=n;i>=2;i--){
     int temp=a[1];
     a[1]=a[n];
     a[n]=temp;
     n--;
     max_heapify(a,1,n);
   }
}

int main(){
  int n, arr[MAX];
  cout<<"Enter the size of the array "<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  cin>>arr[i];
  heap_sort(arr,n);
  for(int i=1;i<=n;i++)
  cout<<arr[i]<<" ";
}
