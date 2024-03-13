#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull gcd(ull e, ull f){
    while(f!=0){
        ull res = e%f;
        e=f;
        f=res;
    }
    return e;
}
int main(){
    ull a, b, c, d;
    cin >> a >> b >> c >> d;
    ull tu = a*d + b*c;
    ull mau = b*d;
    ull gcd2 = gcd(tu, mau);
    tu/=gcd2;
    mau/=gcd2;
    cout << tu << "/" << mau;
    return 0;
}