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
    string S;
    cin >> S;
    int n = S.length();
    //cout << n;
    int count = 0;
    int a = 0;
    for( int i = 0; i < n; i++ ){
        a = i%3;
        if( (a == 0 || a == 2) && S[i] != 'S'){
            count += 1;
        }
        else if( a == 1 && S[i] != 'O'){
            count += 1;
        }
    }
    cout << count << "\n";
    return 0;
}
