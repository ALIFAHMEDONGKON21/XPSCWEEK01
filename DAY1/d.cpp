#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    int c = 0; 
    
   
    int max_coins = max(2 * A - 1, max(2 * B - 1, A + B));
    c += max_coins;
    
    cout << c << endl;
    
    return 0;
}
