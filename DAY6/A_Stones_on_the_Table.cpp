#include<bits/stdc++.h>
#define forI(i,s,n) for(int i=s; i<n; i++)
using namespace std;
int main(){
    
    int n; cin>>n;

    string s; cin>>s;

    int count=0;

    forI(i,0,n)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}