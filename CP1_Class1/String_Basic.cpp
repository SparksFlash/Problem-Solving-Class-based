/*#include <iostream>
using namespace std;

int main() {
    char name1[] = "World";
    char name2[] = {'W', 'o', 'r', 'l', 'd', '\0'}; // notice the null char, it means the string is ending there
    char name3[6] = {'W', 'o', 'r', 'l', 'd', '\0'};
    cout << "name1 = " << name1 << '\n';
    cout << "name2 = " << name2 << '\n';
    cout << "name3 = " << name3 << '\n';
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    char name[100];
    cin >> name;
    cout << name << '\n';
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    char name[100];
    cin.getline(name, 100);
    cout << name << '\n';
    return 0;
}


//Anton and  Danik
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt1 = 0, cnt2 = 0, n;
    cin >> n >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A')
            cnt1++;
        else
            cnt2++;
    }

    if (cnt1 > cnt2)
        cout << "Anton" << '\n';
    else if (cnt1 == cnt2)
        cout << "Friendship" << '\n';
    else
        cout << "Danik" << '\n';
}

// unsolved
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

   // for(int i = 0; i < n; i++){
        cout << *min_element(a, a + n);
   // }
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, total_time = 0, solved_problems = 0;
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        int n, a[n];
        cin >> n;
        string s;
        cin >> s;
        for (int i = 1; i <= n; ++i)
        {
            int problem_time = a[i] - 'A' + 1;
            total_time += problem_time;
        }
        if (total_time <= i)
        {
            solved_problems++;
        }
        cout << solved_problems << endl;
    }
}
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char square[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> square[i][j];
            }
        }
    }
}
