#include <iostream>
#include <string>
#include <cmath>
#include <unordered_map>
#include <cctype>
using namespace std;
int romanToInterger(string s){
    int result = 0;
    unordered_map <char, int> mp ={
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    for(int i=0; i<s.size(); i++){
        if(mp[s[i]] < mp[s[i+1]]){
            result-=mp[s[i]];
            cout << result << endl;
        }
        else{
            result+=mp[s[i]];
            cout << result << endl;
        }
    }
    return result;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    
    cout << romanToInterger(s);
}
    