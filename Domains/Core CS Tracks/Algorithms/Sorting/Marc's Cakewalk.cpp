#include <bits/stdc++.h>

using namespace std;

int main() {
    long  long n,a,sum = 0;
    cin >> n;
    vector<long long> ar;
    for(long long i = 0; i < n; i++){
        cin >> a;
        ar.push_back(a);
    }
    sort(ar.begin(),ar.end());
    for(int i = ar.size() - 1,j = 0; i >= 0; i--,j++){
        sum += (ar[i] * pow(2,j));
    }
    cout << sum << endl;
    return 0;
}