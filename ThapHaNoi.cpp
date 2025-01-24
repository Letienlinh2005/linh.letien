#include <iostream>
using namespace std;

void towerOfHanoi(int n, char a, char c, char b) {
    if (n == 1) {
        cout << "Chuyển từ cột " << a << " sang cột " << c << endl;
    }
    towerOfHanoi(n - 1, a, b, c);
    cout << "Chuyển từ cột " << a << " sang cột " << c << endl;
    towerOfHanoi(n - 1, b, c, a);
}

int main() {
    int n;
    cout << "Nhập số lượng đĩa: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}