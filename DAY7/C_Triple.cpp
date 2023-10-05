#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;

     while( t--)
     {
        int n;
        cin>>n;

        vector<int> v(n);
        
        for(int i=0; i<n ;i++)
        {
            cin>>v[i];
        }

        unordered_map<int, int> freq;

        for(int i=0; i<n; i++)
        {
            freq[v[i]]++;
        }

        int res=-1;

        for(int i=0; i<n; i++){
            if(freq[v[i]]>=3 ){
                res=v[i];
                break;
            }
        }
         cout<<res<<endl;
     }
       

    return 0;
}
