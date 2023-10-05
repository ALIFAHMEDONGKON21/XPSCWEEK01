#include<bits/stdc++.h>
#define forI(i,s,n) for(int i=s; i<n; i++)
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];

    int count=1;
    forI(i,0,n)cin>>a[i];

    forI(i,0,n-1)
    {
        if(a[i]!=a[i+1])
        {
            count++;

        }
    }
    cout<<count<<endl;

    return 0;
}