#include<bits/stdc++.h>
#define forI(i,s,n) for(int i=s; i<n; i++)
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[n];
    forI(i ,0,n) cin>>a[i];

    int k;
    cin>>k;

    int i=0;
    int j=0;

    queue<int>q;

    while (j<n)
    {
        /* code */
        if(a[j]<0)q.push(a[j]);
        if(j>=k-1)
        {
            if(q.size())
            {
                cout<<q.front()<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
            if(a[i]<0)
            {
                q.pop();
            }
            i++;
        }
        j++;
    }
    

    return 0;
}