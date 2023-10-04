#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> numbers(n);

    long long even_sum = 0;
    long long odd_sum = 0;
    long long smallest_odd = INT_MAX;

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            even_sum += numbers[i];
        } else {
            odd_sum += numbers[i];
            smallest_odd = min(smallest_odd, numbers[i]);
        }
    }


    if (odd_sum % 2 == 0) {
        even_sum += odd_sum;
    }
   
    else {
        even_sum += (odd_sum - smallest_odd);
    }

    cout << even_sum << endl;

    return 0;
}
