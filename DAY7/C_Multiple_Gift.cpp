#include <iostream>

using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;

    int length = 0;

    while (X <= Y) {
        X *= 2;
        length++;
    }

    cout << length << endl;

    return 0;
}
