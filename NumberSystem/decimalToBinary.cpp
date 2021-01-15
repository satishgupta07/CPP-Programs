#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int bin=0;
    int place=1;

    while(n>0){

        int rem= n % 2;
        bin = bin + rem*place;
        n=n/2;
        place=place * 10;
    }

    cout<<bin;

    return 0;
}