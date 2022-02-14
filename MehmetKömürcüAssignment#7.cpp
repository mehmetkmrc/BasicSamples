//18-12-2021 Mehmet Kömürcü Lab Assignment#7
#include <iostream>
using namespace std;


void primeFunction(){
    int i, number;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number == 0 || number == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << number << " is a prime number";
    else
        cout << number << " is not a prime number";

}

int main() {
    primeFunction();  
    return 0;
}
  