#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int s = 0;
    int i = 1;
    while(i <= n) {
        s += i;
        i++;
    }

    cout << "Kq: S(" << n << ") = " << s;
    return 0;
}
