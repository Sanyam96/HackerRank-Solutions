#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    int q;
    int m;
    cin >> n >> k >> q;
    vector<int> arr(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> arr[a_i];
    }
    k = k % n;
    for(int i = 0; i < q; i++){
        cin >> m;
        if( m - k >= 0 )
            cout << arr[m-k] << endl;
        else
            cout << arr[m-k+n] << endl;
    }
    return 0;
}
