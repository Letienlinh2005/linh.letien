#include <iostream>
using namespace std;
string Chuyen(long long n){
    string s = "";
    while(n!=0){
        // công vào s lấy dư từ cuối lên đầu

        if(n%2==0){
            s="0"+s;
        }
        else{
            s="1"+s;
            
        }
        n/=2;
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << Chuyen(n) << endl;
    }
    
    
    return 0;
}