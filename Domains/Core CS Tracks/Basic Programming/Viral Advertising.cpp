#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a = 5;
    int n;
    cin >> n;
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + floor(a/2);
        a = floor(a/2) * 3;
    } 
    
    cout << sum << endl;
    return 0;
}