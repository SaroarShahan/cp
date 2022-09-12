#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, product = 1, sum = 0;
    cin >> n;


    while(n != 0) {
        int digit = n % 10;

        product *= digit;
        sum += digit;

        n /= 10;
    }

    cout << product - sum;

    return 0;
}
