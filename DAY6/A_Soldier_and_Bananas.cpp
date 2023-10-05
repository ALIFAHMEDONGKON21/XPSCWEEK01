#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,k,w;
    cin>>n>>k>>w;

    int s=0;
    for(int i=1; i<=w; i++)
    {
        s+=i;
    }
    int d=(n*s)-k;
    if(d<0)
    {
        cout<<"0"<<endl;
    }
    else{
        cout<<d<<endl;
    }
    return 0;
}