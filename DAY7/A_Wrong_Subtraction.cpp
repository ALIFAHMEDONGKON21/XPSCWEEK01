#include<bits/stdc++.h>
#define forI(i,s,n) for(int i=s; i<n; i++)
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    forI(i,0,k){
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
    }
    cout<<n<<endl;

    return 0;
}