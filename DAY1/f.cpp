#include <iostream>
#include <iomanip> // For setw
using namespace std;

int main() {
    int N;
    cin >> N;

    
    cout << setw(4) << setfill('0') << N << endl;

    return 0;
}
