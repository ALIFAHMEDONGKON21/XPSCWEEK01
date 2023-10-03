#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin>>s;

    int parsent[26]={false};

    for(char c: s)
    {
        if('a' <= c && c <= 'z'){
            parsent[c -'a']=true;
        }
    }
    for(int i=0; i<26; ++i){
        if(!parsent[i]){
            cout<<char('a' + i)<<endl;
            return 0;
        }
    }

    cout<<"None"<<endl;
    return 0;
}
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string S;
//     cin >> S;

//     bool present[26] = {false}; // Initialize an array to mark the presence of lowercase letters

//     for (char c : S) {
//         if ('a' <= c && c <= 'z') {
//             present[c - 'a'] = true; // Mark the presence of the character
//         }
//     }

//     for (int i = 0; i < 26; ++i) {
//         if (!present[i]) {
//             cout << char('a' + i) << endl; // Print the first missing character
//             return 0;
//         }
//     }

//     cout << "None" << endl; // If all lowercase letters are present

//     return 0;
// }
