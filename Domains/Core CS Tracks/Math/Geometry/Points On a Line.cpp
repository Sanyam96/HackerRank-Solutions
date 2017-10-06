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
    cin >> n;

    int arr1[n];
    int arr2[n];
    int flag1 = 0, flag2 = 0;
    for( int i = 0; i < n; i++ )
    {
        cin >> arr1[i] >> arr2[i];
    }
    for( int i = 0; i < n-1; i++ )
    {
        if( arr1[i] != arr1[i + 1])
        {
            flag1++;
        }
        if( arr2[i] != arr2[ i + 1])
        {
            flag2++;
        }
    }
    
    if( flag1 == 0 || flag2 == 0 )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    

    return 0;
}
