#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n => ";
    cin >> n;

    int arr[n-1];
    cout << "Enter sorted " << n-1 << " elements => ";
    for(int i=0;i<n-1;i++) cin >> arr[i];

    int lo=0, hi=n-2, ans=n;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==mid+1) lo=mid+1;
        else { ans=mid+1; hi=mid-1; }
    }

    cout << "Missing number => " << ans << endl;
    return 0;
}
