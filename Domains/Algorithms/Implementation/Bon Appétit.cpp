#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k;
    cin >> n >> k;
    int arr[n];
    for( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }
    
    int sum = 0;
    for( int i = 0; i < n; i++ ){
        if( i == k){
            continue;
        }
        else{
            sum += arr[i];
        }
    }
    int shared;
    cin >> shared;
    sum = sum/2;
    if( shared == sum ){
        cout << "Bon Appetit" << "\n";
    }
    else{
        cout << shared-sum << "\n";
    }
    
    return 0;
}
