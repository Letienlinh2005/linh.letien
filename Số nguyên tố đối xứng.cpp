#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2; i<=sqrt(n); ++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
// Hàm kiểm tra số đối xứng (số Palindrome)
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    int remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long l, r;
        cin >> l >> r;
        long long sum = 0;
        for (long long i = l; i <= r; ++i) {
            if (isPrime(i) && isPalindrome(i)) {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
