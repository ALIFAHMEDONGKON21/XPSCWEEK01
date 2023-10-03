#include<bits/stdc++.h>
#define forI(i,s,n) for(int i=s; i<n; i++)
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    forI(i ,0,n) cin>>arr[i];

    int k;
    cin>>k;

    int mx=INT_MIN;
    int j;

    forI(i,0,n-k+1)
    {
        int s=0;
        forI(j,i,i+k)
        {
            s+=arr[j];
        }
        mx=max(mx,s);
    }

    cout<<mx<<endl;

    return 0;
}