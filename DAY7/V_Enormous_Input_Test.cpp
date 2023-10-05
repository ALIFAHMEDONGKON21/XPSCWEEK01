#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int count = 0;

    for (int i = 0; i < n; ++i) {
        int ti;
        std::cin >> ti;
        if (ti % k == 0) {
            count++;
        }
    }

   cout << count << std::endl;

    return 0;
}
