#include <iostream>
using namespace std;

int main() {
    long long n = 600851475143;
    long long i=2;

    while (i*i <= n) {
        if (n % i == 0) {
            n = n / i;
        }
        else{
            i=i+1;
        }
    }
    cout << n << endl;  // The answer is 233168
    return 0;
} 