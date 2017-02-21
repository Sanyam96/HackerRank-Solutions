#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll an = 2*n;
        ll a[an][an];
         
        for(ll i=0;i<an;i++){
            for(ll j=0;j<an;j++) cin>>a[i][j]; 
        }
         
        ll maxi=-1;
        ll sum = 0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                ll adder = a[i][j];
                adder = max(adder,max(a[an-i-1][j],a[i][an-j-1]));
                adder =  max(adder,a[an-i-1][an-j-1]);
                sum += adder;
            }
        }
        cout<<sum<<endl;
    }
}