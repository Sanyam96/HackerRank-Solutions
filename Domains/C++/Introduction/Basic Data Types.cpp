
#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long int b;
    long long int c;
    char ch;
    float e;
    double f;

    scanf("%d %ld %lld %c %f %lf", &a, &b, &c, &ch, &e, &f);

    printf("%d\n",a);
    printf("%ld\n",b);
    printf("%lld\n",c);

    printf("%c\n",ch);

    printf("%.3f \n",e);
    printf("%.9lf \n",f);
    
    return 0;
}