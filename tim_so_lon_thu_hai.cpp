#include <iostream>
#include <algorithm>
using namespace std;

void findSecondLargest(int a[], int n) {
    if (n < 2) {
        cout << "NOT FOUND\n";
        return;
    }
    // Tìm số lớn thứ hai khác số lớn nhất
    for (int i = 1; i < n; i++) {
        if (a[i] < a[0]) {
            cout << a[i] << endl;
            return;
        }
    }

    cout << "NOT FOUND\n";
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // Sắp xếp mảng giảm dần
    sort(a, a+n);
    reverse(a, a+n);
    findSecondLargest(a, n);

    return 0;
}
