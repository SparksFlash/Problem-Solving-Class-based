#include <bits/stdc++.h>
using namespace std;
int main()
{
    tuple<int, double, string> t;
    t = make_tuple(40, 75.98, 'B');
    cout << get<0>(t) << ' ' << get<1>(t) << ' ' << get<2>(t);
}