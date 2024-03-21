#include <iostream>
#include <algorithm>
using namespace std;
bool binarySearch (int a[], int n, int x){
    int left = 0;
    int right = n-1;
    while(left <= right){
        int mid = (left + right)/2;
        if(a[mid] == x){
            return true;
        }
        else if(a[mid] < x){
            left = mid + 1;
            
        }
        else{ // a[mid] > x
            right = mid - 1;
        }
    }
    return false;
}
int main(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    if(binarySearch(a, n, x)){
        cout << "Found" << endl;
    }
    else{
        cout << "NOT FOUND" << endl;
    }
}