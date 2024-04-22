#include <iostream>
using namespace std;
bool LinearSearch(int a[], int n, int target){
    for(int i=0; i<n; i++){
        if(a[i] == target){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout << "Nhập số phần tử của mảng: ";
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cout << "Nhập phần tử thứ " << i+1 << " : ";
        cin >> a[i];
    }
    int target;
    cout << "Nhập số cần tìm: ";
    cin >> target;
    if(LinearSearch(a, n, target)){
        cout << target << " được tìm thấy trong mảng";
    }
    else{
        cout << target << " không được tìm thấy trong mảng";
    }
    return 0;
}
