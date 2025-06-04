#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it = v.begin();
    // cout << (*it) << '\n'; // Output: 1

    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // v.resize(2);

    // v.assign(6, 5);
    //  vector<int> v(6,5);

    // v.clear();

    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back(); //error empty before pop
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << ' ';
    // }

    if (v.empty())
        cout << "\nYES" << '\n';
    else
        cout << "\nNO" << '\n';

    // Iterator
    vector<int>::iterator it = v.begin();

    // it = v.begin();
    // cout << (*it) << '\n';

    // cout << (*(--v.end()));

    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << '\n';
    // }

    // we can also write together
    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << '\n';
    // }

    // reverse
    //  vector<int>::reverse_iterator rit;
    //  for (auto it = v.rbegin(); it != v.rend(); it++)
    //      cout << (*it) << '\n';

    it = next(next(it));
    cout << *it << '\n';

    vector<int> v1 = {1, 2, 3, 4, 5};
    for (int x : v1)
        cout << x << ' ';
    // for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    // {
    //     cout << (*it) << ' ';
    // }
    // cout << '\n';

    cout << '\n';
    vector<pair<int, int>> v3;
    v3.push_back(make_pair(1, 2));
    v3.push_back(make_pair(3, 4));
    v3.push_back(make_pair(5, 6));
    v3.push_back(make_pair(7, 8));
    // for (auto it = v3.begin(); it != v3.end(); it++)
    // {
    //     cout << (*it).first << ' ' << (*it).second << '\n';
    // }

    for (auto p : v3)
        cout << p.first << ' ' << p.second << '\n';

    // for (auto [x, y] : v3)
    //     cout << x << ' ' << y << '\n';

    vector<int> v2 = {10, 20, 30, 40, 50};
    // reverse all elements of the vector
    reverse(v2.begin(), v2.end()); // reverse the range [v.begin(), v.end()) => {50, 40, 30, 20, 10}

    sort(v2.begin() + 1, v2.end() - 1); // sort the range [v.begin() + 1, v.end() - 1) => {50, 20, 30, 40, 10}

    // so it basically excludes the right end of the range
}