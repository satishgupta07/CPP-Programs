#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int num;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    int originalNum = num;
    int sum = 0;

    while (originalNum != 0) {
        int rem = originalNum % 10;
        
        sum += pow(rem,3);
        
        originalNum /= 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}