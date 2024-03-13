#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main() {
    bool Continue = true;
    while(Continue){
        char choice;
        cin >> choice;
        switch (choice)
        {
        case '1':
            int n;
            cin >> n;
            for(int i=1; i<=sqrt(n); i++){
                cout << i*i << " ";
            }
            break;
        case '2':
            int num;
            cin >> num;
            int sum = 0;
            for(int i=2; i<num; i++){
                bool isPrime = true;
                if(i<2){
                    isPrime = false;
                }
                else{
                    for(int j=2; j<=sqrt(i); j++){
                        if(i%j==0){
                            isPrime = false;
                            break;
                        }
                    }
                }
                    if(isPrime){
                    sum+=i;
                }
                cout << sum;
            }
            break;
        }
    }
    return 0;
}   
