#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       
        vector<int>v(n);
        int sum = 0;

        for( int i=0 ; i<n; i++){
            cin>>v[i];
            sum += v[i];
        }
        int minbox = INT_MAX;
        for( int i=0 ; i<n; i++){
            if(v[i] < minbox ){
                minbox = v[i];
            }
        }
        int val = minbox*n;
        int ans = sum - val;
        cout<<ans<<endl;
    }
    return 0;
}