#include <iostream>
using namespace std;

int main() {
    long long start = 1;
    long long second=2;
    long long total=0;

    while (start <= 4000000) {

        if (start % 2 == 0) {
            total = total + start;
        }
        start=second;
        second=start+second;
    }
    cout << total << endl;  // The answer is 233168
    return 0;
} 