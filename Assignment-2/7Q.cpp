#include<iostream>
using namespace std;

int mergeCount(int arr[],int temp[],int l,int m,int r){
    int i=l,j=m,k=l; long long inv=0;
    while(i<=m-1 && j<=r){
        if(arr[i]<=arr[j]) temp[k++]=arr[i++];
        else{ temp[k++]=arr[j++]; inv+=m-i; }
    }
    while(i<=m-1) temp[k++]=arr[i++];
    while(j<=r) temp[k++]=arr[j++];
    for(i=l;i<=r;i++) arr[i]=temp[i];
    return inv;
}
long long _mergeSort(int arr[],int temp[],int l,int r){
    long long inv=0;
    if(l<r){
        int m=(l+r)/2;
        inv=_mergeSort(arr,temp,l,m);
        inv+=_mergeSort(arr,temp,m+1,r);
        inv+=mergeCount(arr,temp,l,m+1,r);
    }
    return inv;
}
int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int temp[n];
    cout<<"Inversions => "<<_mergeSort(arr,temp,0,n-1)<<endl;
}
