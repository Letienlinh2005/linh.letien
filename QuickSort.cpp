#include <iostream>
using namespace std;

long long Lomuto_Partition(long long a[], long long l, long long r){
    int pivot = a[r];
    int i = l-1;
    for(int j=l; j<r; j++){
        if(a[j] <= pivot){
            ++i;
            swap(a[i], a[j]);
        }
    } 
    swap(a[i+1], a[r]);
    return i+1;
}
void quicksort(long long a[], long long l, long long r){
    if(l<r){
        int p = Lomuto_Partition(a, l, r);
        quicksort(a, l, p-1);
        quicksort(a, p+1, r);
    }
    
}
int main(){
    long long n;
    cin >> n;
    long long a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    quicksort(a, 0, n-1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
