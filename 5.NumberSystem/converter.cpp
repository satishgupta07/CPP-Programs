#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n) {
    int ans = 0;
    int base = 1;
    while(n>0) {
        int rem = n%10;
        ans += base*rem;
        base *=2;
        n /= 10;
    }

    return ans;
}

int octalToDecimal(int n) {
    int ans = 0;
    int base = 1;
    while(n>0) {
        int rem = n%10;
        ans += base*rem;
        base *=8;
        n /= 10;
    }

    return ans;
}

int hexadecimalToDecimal(string n) {
    int ans = 0;
    int base = 1;

    int len = n.size();

    for(int i=len-1; i>=0; i--) {
        if(n[i]>='0' && n[i]<='9') {
            ans += base*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F') {
            ans += base*(n[i]-'A' + 10);
        }
        base *= 16;
    }

    return ans;
}

int main() {

    // int n;
    string n;
    cin>>n;

    // cout<<binaryToDecimal(n)<<endl;
    // cout<<octalToDecimal(n)<<endl;
     cout<<hexadecimalToDecimal(n)<<endl;

    return 0;
}

