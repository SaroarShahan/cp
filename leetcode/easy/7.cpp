#include<bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;

    int ans = 0;

    while(x != 0) {
        int d = x % 10;

        if((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
            return 0;

        ans = (ans * 10) + d;

        x /= 10;
    }

    cout << ans;


    return 0;
}
