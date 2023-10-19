#include <bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define ull unsigned long long
using namespace std;

ull n;
ull *arr;

bool is_beautiful() {
    for (ull i = 0; i < n-1; i++) {
        if (arr[i] - arr[i+1] == 1 || arr[i] - arr[i+1] == -1) {
            return false;
        }
    }
    return true;
}

int main() {
    fastread();
    cin >> n;
    arr = new ull[n];
    for (ull i = 0; i < n; i++) arr[i] = 1;

    for (ull i = 0; i < n; i++) {
        for ()
    }


    
    return 0;
}