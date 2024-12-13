#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Initialization using make_pair
    pair<int, double> p2 = make_pair(77, 99);

    pair<int, double> p, q; // Declaration
    p = make_pair(5, 3.5);
    q = make_pair(6, 7);
    // swap(p, q);
    cout << p.first << ' ' << p.second << '\n';
    cout << q.first << ' ' << q.second << '\n';

    // Arrays of pair
    pair<int, int> points[10];
    points[0] = make_pair(4, 5);
    points[1] = make_pair(2, 3);
    points[2] = make_pair(0, 0);
    for (int i = 0; i < 3; i++)
        cout << points[i].first << ' ' << points[i].second << '\n';

    // Pairs of pair
    pair<pair<int, int>, int> pairs;
    pairs = make_pair(make_pair(6, 9), 12);
    cout << pairs.first.first << ' ' << pairs.first.second << ' ' << pairs.second << '\n';

    // Structured Binding
    pair<int, int> pai_r;
    pai_r = make_pair(45, 69);
    auto [x, y] = pai_r;
    cout << x << ' ' << y << '\n';

    // Using tie to access the elements of a pair
    pair<int, int> p3;
    p3 = make_pair(25, 95);
    int a, b;
    tie(a, b) = p3;
    cout << a << ' ' << b << '\n';
}