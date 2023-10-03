#include<bits/stdc++.h>
#define forI(i,s,n) for(int i=s; i<n; i++)
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[n];
    forI(i ,0, n)cin>>a[i];

    int k;
    cin>>k;

    int i=0;
    int j=0; 
    int s=0;

    int mx=INT_MIN;

    while (j<n)
    {
        /* code */
        s+=a[j];
        if(j>=k-1)
        {
          mx= max(mx,s);
          s-=a[i];
          i++;
        }
        j++;
    }
    cout<<mx<<endl;
    

    return 0;
}