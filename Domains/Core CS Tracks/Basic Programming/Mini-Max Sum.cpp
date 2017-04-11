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
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    //cin >> a >> b >> c >> d >> e;

    long long int arr[5];
    for( int i = 0; i < 5; i++ )
    {
        cin >> arr[i];
    }
    sort( arr, arr + 5);
    long long min = 0,max = 0;
    for( int i = 0; i < 4; i++ )
    {
        min += arr[i];
    }
    for( int i = 1; i < 5; i++ )
    {
        max += arr[i];
    }

    cout << min << " " << max;
    return 0;
}
