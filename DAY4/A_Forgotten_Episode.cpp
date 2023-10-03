#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> watched(n, false);

   
    for (int i = 0; i < n - 1; ++i) {
        int e;
        cin >> e;
        watched[e - 1] = true; 
    }

   
    for (int i = 0; i < n; ++i) {
        if (!watched[i]) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
