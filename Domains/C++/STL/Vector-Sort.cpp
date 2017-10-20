#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    vector<int> v;
    int n;
    cin >> n;
    int x;
    
    for( int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for( int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
