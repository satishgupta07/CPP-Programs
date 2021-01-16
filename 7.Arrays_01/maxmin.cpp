#include<iostream>
#include<climits>
using namespace std;

int main() {

    int n; 
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i=0; i<n; i++) {
        if(arr[i]>maxNo) {
            maxNo = arr[i];
        }
        minNo = min(minNo, arr[i]);
    }

    cout<<"Max number is "<<maxNo<<" and "<<"min number is "<<minNo<<endl; 

    return 0;
}