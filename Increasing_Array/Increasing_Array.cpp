#include <bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define ull unsigned long long
using namespace std;

int main() {
    fastread();
    ull n, res = 0;
    cin >> n;
    
    ull prev, act;
    cin >> prev;
    
    for (ull i = 0; i < n-1; i++) {
        cin >> act;
        if (prev > act) {
            ull diff = prev - act;
            act += diff;
            res += diff;
        }
        prev = act;
    }
    cout << res;
    
    return 0;
}
