#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it = v.begin();
    // cout << (*it) << '\n'; // Output: 1

    vector<int> v(5);
    v.push_back(10);
    v.push_back(30);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
}