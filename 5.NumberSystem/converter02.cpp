#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n) {
    int ans = 0;
    int base = 1;

    while(base <= n) {
        base *= 2;
    }
    base /= 2;

    while(base>0) {
        int lastDigit= n/base;
        n -= lastDigit*base;
        base /= 2;
        ans = ans*10 + lastDigit;
    }
    
    return ans;
}

int decimalToOctal(int n) {
    int ans = 0;
    int base = 1;

    while(base <= n) {
        base *= 8;
    }
    base /= 8;

    while(base>0) {
        int lastDigit= n/base;
        n -= lastDigit*base;
        base /= 8;
        ans = ans*10 + lastDigit;
    }
    
    return ans;
}

string decimalToHexadecimal(int n) {
    int base = 1;
    string ans = "";
    while(base <= n) {
        base *= 16;
    }
    base /= 16;
    while(base>0) {
        int lastDigit = n/base;
        n -= lastDigit*base;
        base /= 16;

        if(lastDigit <= 9) {
            ans = ans + to_string(lastDigit);
        }
        else {
            char c = 'A'+lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main() {

    int n;
    cin>>n;

    // cout<<decimalToBinary(n)<<endl;
    // cout<<decimalToOctal(n)<<endl;
    cout<<decimalToHexadecimal(n)<<endl;
  
    return 0;
}

