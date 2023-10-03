#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int fristH = 0;
        int secondH = 0;

        for (int i = 0; i < 3; i++) {
            fristH += (s[i] - '0'); 
            secondH += (s[i + 3] - '0');
        }

        if (fristH == secondH) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
