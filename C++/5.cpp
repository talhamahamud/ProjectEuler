#include <iostream>
#include <numeric>
using namespace std;
int lcm(long long a, long long b){
    return a * b / gcd(a, b);
}

int main() {
    long long num=1;

    for (long long i = 1; i < 21; i++)
    {
        num=lcm(num, i);
    }
    cout << num << endl;
    return 0;
}
