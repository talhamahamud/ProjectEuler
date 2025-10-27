#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int plain(int k){
    string str = to_string(k);
    string rev = str;
    reverse(str.begin(), str.end());

    return (str==rev);
}
int main() {
    int b=0;
    int f=100;
    int l=999;
    while (f<=999)
    {
        for (int i = 100; i <= 999; i++)
        {
            if (plain(i*f)==true and b<(i*f))
            {
                b=i*f;
            }
        }
        f=f+1;
    }
    cout << b << endl;
    return 0;
} 