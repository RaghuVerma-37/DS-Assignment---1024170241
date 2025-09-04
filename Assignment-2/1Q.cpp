#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements => " ;
    cin >> n;

    int arr[100];
    cout << "Enter the elements of the array => ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    int target;
    cout << "Enter the element to find => ";
    cin >> target;

    int lo = 0;
    int hi = n-1;
    
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid] == target){
            cout << "Element is found." << endl;
            return 0;
        } else if(arr[mid]<target){
            lo = mid+1;
        } else if (arr[mid]>target){
            hi = mid-1;
        }
    }

    cout << "Element is not found." << endl;

    return 0;
}