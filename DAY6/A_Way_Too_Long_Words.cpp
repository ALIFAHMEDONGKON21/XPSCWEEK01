#include<bits/stdc++.h>
#define forI(i,s,n) for(int i=s; i<n; i++)
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;

    forI(i,0,n)
    {
        cin>>s;

        if(s.size()>10)
        {
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }
        else{
        cout<<s<<endl;
        }
    }

    return 0;
}