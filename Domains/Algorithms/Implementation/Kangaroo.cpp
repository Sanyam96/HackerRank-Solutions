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


int main() {
 
    int x1,x2,v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    while(true){
        if(x2 > x1 && v2 > v1 || x1 > x2 && v1 > v2 || v1 == v2){
            cout << "NO" << endl;
            break;
        }
        if((x1 += v1) == (x2 +=v2)){
            cout << "YES" << endl;
            break;
        }
    }
    return 0;
}