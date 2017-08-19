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
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        int res1, res2;
        res1 = z - x;
        res2 = z - y;
        if (std::abs(x-z) < std::abs(y-z)) {
            std::cout << "Cat A\n";
        } else if (std::abs(x-z) > std::abs(y-z)) {
            std::cout << "Cat B\n";
        } else {
            std::cout << "Mouse C\n";
        }
    }
    return 0;
}
