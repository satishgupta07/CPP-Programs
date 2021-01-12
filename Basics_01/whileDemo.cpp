#include<iostream>
using namespace std;

int main() {

    int number;
    int sum = 0;

    cout<<"Enter a number: ";
    cin>>number;

    while(number >= 0) {
        sum = sum + number;
        cout<<"Enter a number: ";
        cin>>number;
    }

    cout<<"\nThe Sum is : "<<sum<<endl;

    return 0;

}