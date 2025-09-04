#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    string arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr, arr+n);
    cout << "Sorted strings => ";
    for(string s: arr) cout << s << " ";
    cout << endl;
    return 0;
}
