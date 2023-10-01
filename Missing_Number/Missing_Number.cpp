#include <iostream>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
int main() {
    fastread();
    
    unsigned long long n;
    unsigned long long num;
    cin >> n;
    
    bool arr[n];
    for (int i = 0; i < n; i++) arr[i] = false;
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[num-1] = true;
    }
    for (int i = 0; i < n; i++) {
        if (!arr[i]) {
            cout << i+1;
            break;
        }
    }
 
    return 0;
}
