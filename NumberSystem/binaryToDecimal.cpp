#include<iostream>
#include <cmath>

using namespace std;

int main() {

    int bin;
    cin>>bin;

    int deci=0;
    int place=0;

    while(bin>0){

        int r= bin % 10;
        deci=deci +  (r * pow(2,place));
        bin=bin/10;
        place=place + 1;
    }

    cout<<deci;

    return 0;
}