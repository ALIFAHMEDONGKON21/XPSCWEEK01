#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int>v(n);
      
        for( int i = 0; i<n; i++ ){
            cin>>v[i];
        }

        bool flag = true;
        
        int arr1 = v[0] % 2;
        int arr2 = v[1] % 2;

        for(int i = 0 ; i<n ; i+=2){
            if(v[i] % 2 != arr1){
                flag = false;
                break;
            }
        }

        if( flag == true ){
            for(int i = 1 ; i<n ; i+=2){
            if(v[i] % 2 != arr2){
                flag = false;
                break;
            }
        }
        }

        if( flag ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
