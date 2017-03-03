    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    #define lli long long int
    using namespace std;


    int main() {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        lli test,n,i,j,k,sum;
        cin>>test;
        while(test--)
        {
            cin>>n;
            lli fir=1,sec=2,t=3,sum=sec;
            while(true) {
            fir=sec;
            sec=t;
            t=fir+sec;
            if(t>n)
                break;
            if(t%2==0)
                sum+=t;
        }
        cout<<sum<<endl;
        }
        return 0;
    }