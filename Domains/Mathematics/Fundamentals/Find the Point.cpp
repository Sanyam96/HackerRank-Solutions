#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int px, py, qx, qy;
    
    int tc;

    cin >> tc;
    while( tc-- )
    {
        cin >> px >> py >> qx >> qy;

        cout << ((qx-px) + qx) << " " <<((qy-py) + qy) << endl;
    }
    return 0;
}
