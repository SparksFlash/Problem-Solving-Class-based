/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,a[n]; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long a[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    long long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i];
    }
    cout << abs(sum) << '\n';
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[n];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[n], j = 0;
    for (int i = n - 1; i >= 0; i--) {
        b[j] = a[i];
        j++;
    }
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << '\n';
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col; cin >> row >> col;
    int a[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> a[i][j];
        }
    }

   for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << a[i][j] <<' ';
        }
           cout << '\n';
    }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,a[n]; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> n;
    for(int i = 0; i < n; i++){
        if(a[i] == n)
             cout << i << ' ';
        else
             cout << "-1" << ' ';

    }
}
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == n || i == 1 || j == 1 || j == n){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << '\n';
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt = 1; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] != a[i + 1])
             cnt++;
    }
    cout << cnt;
}

#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if((a < b && b < c && a < c) || (a > b && b > c && a > c) || (a == b && b ==c && c == a)){
        cout << "Yes" << '\n';
    }
    else{
        cout << "No" << '\n';
    }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    double distance = sqrt( n * (12800000 + n));
    cout.precision(6);
    cout << fixed << distance << endl;
}


//subarrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int l = 0; l < n; l++)
    {
        for (int r = l; r < n; r++)
        {
            for (int i = l; i <= r; i++)
            {
                cout << a[i] << ' ';
            }
            cout << '\n';
        }
    }
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col; cin >> row >> col;
    int a[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> a[i][j];
        }
    }

   for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << a[i][j] <<' ';
        }
           cout << '\n';
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, ans = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        ans ^= x;
    }

    for (int i = 1; i <= n; i++)
    {
        ans ^= i;
    }
    cout << ans << '\n';
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    long long x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        if (sum % 2 == 0)
        {
            cout << sum << '\n';
        }
    }
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
}