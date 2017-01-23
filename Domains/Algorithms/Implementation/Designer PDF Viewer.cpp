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
#include <stdio.h>

using namespace std;


int main(){
    int n = 26;
    vector<int> h(n);
    for(int h_i = 0;h_i < n;h_i++){
       cin >> h[h_i];
    }
    //string word;
    //cin >> word;

    char word[256];
    cin >> word;


    unsigned len = strlen(word);
    //cout << len << endl << endl;
    int max = 0;
    int j = 0;

    max = h[0];
    for( char ch = 'a'; ch <= 'z'; ch++)
    {
        
        //cout << ch << endl;
        for( int i = 0; i < len; i++)
        {
            if( word[i] == ch )
            {
                if( max < h[j])
                    max = h[j];
            }
        }
        j++;
    }

    cout << max*len << endl;
    return 0;
}
