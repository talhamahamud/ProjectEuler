#include <iostream>
using namespace std;

int main() {
    int k = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            k = k + i;
        }
    }

    cout << k << endl;  // The answer is 233168
    return 0;
} 