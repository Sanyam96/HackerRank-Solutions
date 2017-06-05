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
    string s;
    cin >> s;
    int count = 1;
    for( int j = 1; j < s.length(); j++)
    {
        for( char i = 'A'; i <= 'Z'; i++)
            if( s[j] == i )
            {
                count++; 
                break;   
            }
    }
    cout << count << endl;
    return 0;
}
