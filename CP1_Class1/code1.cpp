/*#include <iostream>
#include "customHeader.h"
using namespace std;

int main()
{
    long long y = 40;
    cout << x << '\n';
    cout << (1LL << y) << '\n'; /// 1LL = (long long)1
    cout << add_two(10, 20) << '\n';
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    fun(n - 1);
}

int main()
{
    int n = 1e5; // try with n = 1e3, 1e8
    fun(n);
    return 0;
}
