#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int f=0;
    int s=1;
    while(n>=0){
        int t=f+s;
        cout<<f<<" ";
        f=s;
        s=t;
        n=n-1;
    }

    return 0;
}