#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // // s.push_back('!');
    // // s.push_back('B');
    // s.pop_back();
    s += 'e';
    string p = s.substr(2, 6);
    cout << s << '\n';
    cout << p << '\n';
}