/*Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int sum = 0;
    int i = 1;
    while(i <= n) {
        sum += i * i;
        i++;
    }

    cout << "kq: S(" << n << ") = " << sum << endl;
    return 0; 
}