#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it = v.begin();
    // cout << (*it) << '\n'; // Output: 1

    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(30);
    v.push_back(40);

    v.resize(2);

    v.assign(6, 5);
    // vector<int> v(6,5);

    // v.clear();

    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back(); //error empty before pop
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }

    if (v.empty())
        cout << "\nYES" << '\n';
    else
        cout << "\nNO" << '\n';
}