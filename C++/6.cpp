#include <iostream>
using namespace std;

int main() {
    int s_sq=0;
    int sq_s=0;

    for (int i = 0; i < 101; i++)
    {
        s_sq=s_sq+i*i;
        sq_s=sq_s+i;

    }

    cout << (sq_s*sq_s)-s_sq << endl;
    return 0;
} 