#include<bits/stdc++.h>
using namespace std;
#define fl(i,n) for(int i=0;i<n;i++)

void solved(){

    long long n, x=0;
    cin>>n;

    long long arr[n];
    fl(i,n) cin>>arr[i];

    long long ans=0;
    fl(i, n){

        if(arr[i]>(i+1)){
            x=abs((i+1)-arr[i]);
            ans=max(x,ans);
            
        }
    }
    cout<<ans<<endl;

}
    


int main(){
    int t;
    cin>>t;

    while(t--){

       solved();
    }
    return 0;
}