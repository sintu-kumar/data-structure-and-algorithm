#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
   cin>>a[i];
for(int i=1;i<n;i++)
{
  while(i>0&&a[i]<a[i-1])
  {
    int temp=a[i];
    a[i]=a[i-1];
    a[i-1]=temp;
    i--;
  }
}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}
