#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }
    int cnt;
    int max = 0;
    for( int i = 0; i < n; i++ ){
        cnt = 0;
        for( int j = 0; j < n; j++ ){
            if( arr[i] == arr[j] ){
                cnt++;
            }
        } 
        if( cnt > max ){
            max = cnt;
        }       
    }
    cout << n - max << "\n";
    return 0;
}