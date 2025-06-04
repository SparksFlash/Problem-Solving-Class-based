#include <bits/stdc++.h>
using namespace std;

int get_ith_bit(int n, int i)
{
    // return (n >> i) & 1;
    int mask = (1 << i);
    return (n & mask > 0 ? 1 : 0);
}

void set_ith_bit(int &n, int i)
{
    n = n | (1 << i);
}

void clear_ith_bit(int &n, int i)
{
    n = n & ~(1 << i);
}

void update_ith_bit(int &n, int i, int val)
{
    clear_ith_bit(n, i);
    int mask = (1 << val);
    n = n | mask; // sets the right value
}

void clear_last_ith_bits(int &n, int i)
{
    n = n & (-1 << i);
}

int32_t main()
{
    int n = 15;
    int i;
    cin >> i;
    // cout << get_ith_bit(n, i);
    // clear_ith_bit(n, i);
    // set_ith_bit(n, i);
    // update_ith_bit(n, i, 0);

    clear_last_ith_bits(n, i);
    cout << n;
}