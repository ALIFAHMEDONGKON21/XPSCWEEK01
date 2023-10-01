#include <iostream>

using namespace std;

int main() {
    int A, B, T;
    cin >> A >> B >> T;

    int total_biscuits = 0;
    int time_elapsed = A;

    while (time_elapsed <= T + 0.5) {
        total_biscuits += B;
        time_elapsed += A;
    }

    cout << total_biscuits << endl;

    return 0;
}
