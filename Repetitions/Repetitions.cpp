#include <bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main() {
    fastread();
    string str;
    cin >> str;
    
    int count = 0, longest = 0;
    char prev = str[0], act;
    for (int i = 0; i < str.length(); i++) {
        act = str[i];
        if (prev == act) count++;
        else {
            prev = act;
            if (count > longest) {
                longest = count;
            }
            count = 1;
        }
    }
    if (count > longest) {
        longest = count;
    }
    cout << longest; 

    return 0;
}
