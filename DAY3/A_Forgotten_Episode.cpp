#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

   vector<long long>v(n-1);

    for(int  i=0; i<n-1; i++){
     cin>>v[i];
    }
    
    int total_sun=(n*(n+1)/2);

    int  watching_sum=0;
    for(int i=0; i< n-1; i++)
    {
        watching_sum+=v[i];
    }

   int missing=total_sun-watching_sum;

   if(missing>0)cout<<missing<<endl;

   else cout<<'1'<<endl;

    return 0;
}