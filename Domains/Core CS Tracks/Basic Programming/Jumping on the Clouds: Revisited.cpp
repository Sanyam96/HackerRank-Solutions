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

#define ll long long

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b

int readline(char *str) {
    int i = 0;
    char ch;
    while((ch = getchar()) != '\n') {
        str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

int main(int argc, char *argv[]) {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }

    int e = 100;
    int start = 0;

    do {
        e--;
        start = (start + k) % n;

        if(arr[start] == 1) {
            e -= 2;
        }

    } while(start != 0);

    cout << e << endl;

    return 0;
}