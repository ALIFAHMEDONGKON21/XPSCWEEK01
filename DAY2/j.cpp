#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    double discount = ((A - B) * 100.0) / A;

    cout << fixed << setprecision(1) << discount << endl;

    return 0;
}
