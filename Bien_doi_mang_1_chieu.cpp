#include <iostream>
#include <cmath>

using namespace std;
void BienDoi(){
    int n;
    cin >> n;
    int a[100];
    for(int i=0; i<n; i++){
        cin >> a[i];

    }
    a[n] = 0;
    for(int i=1; i<n; i+=2){
        a[i] += abs(a[i-1] - a[i+1]);

    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
int main(){
    BienDoi();
    return 0;
}