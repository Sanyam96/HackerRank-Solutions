#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int largestHeight(int arr[], int n){
    int h = arr[0];
    for( int i = 1; i < n; i++){
        if( h < arr[i] ){
            h = arr[i];
        }
    }
    return h;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n >> k;
    int arr[n];
    for( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }
    if( (largestHeight(arr,n) - k) > 0 ){
        cout << largestHeight(arr,n) - k << endl;
    }
    else{
        cout << "0" << endl;
    }
    
    return 0;
}
