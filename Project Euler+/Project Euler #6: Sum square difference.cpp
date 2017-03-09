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
    int t;
    cin >> t;
    while ( t-- )
    {
        long long int n;
        cin >> n;
        long long int totalSum = 0, IndiSum = 0; 
        
        for( long long int i = 1; i <= n; i++ )
        {
            IndiSum += i * i;
            totalSum += i;
        }
        totalSum = totalSum*totalSum;

        if( totalSum > IndiSum )
            cout << totalSum - IndiSum << endl;
        else if( totalSum == IndiSum)
            cout << "0" << endl;
        else
            cout << IndiSum - totalSum << endl;
        //cout << abs((totalSum * totalSum) - IndiSum) << endl;
    }
    return 0;
}
