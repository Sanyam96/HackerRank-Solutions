#include <bits/stdc++.h>
using namespace std;


using namespace std;

int number( int n) {
    int min = 1, a[n];
    
    for( int i = 0; i < n; i++ ) {
        a[i] = i + 1;
    }
   
    for( int i = 0; i < n-1; i++) {
        for( int j = i+1; j < n; j++ ) {
            if( ( a[j] % a[i] ) == 0 ) {
                a[j] = a[j] / a[i];
            }                
        }
        min = min * a[i];
    }
    
    return min*a[n-1];
    
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << number(n) << "\n";
    }
    return 0;
}
