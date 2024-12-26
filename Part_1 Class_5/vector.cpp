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
}