// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_DEPRECATE
const int max = 1000000007;
#include <iostream>
#include <stdio.h>
long long fast_powtest(long long a, long long n) {
    long long base = a;
    long long res = 1;
    while (n) {
        if (n & 1)
            res *= base;
        base *= base;
        n >>= 1;
    }
    return res;
}
long long gcddd(long long a, long long b) {
    return b == 0 ? a : gcddd(b, a % b);
}
int main()
{
    int a;
    long long b,n=1,fz,fm,k,t1,t2;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%lld", &b);
        n = n * b;
    }
    k = fast_powtest(2, n - 1);
    if (n % 2 == 0)
        fz = (k + 1) / 3;
    else
        fz = (k - 1) / 3;
    fm = k;
    t1 = (fz % max);
    t2 = (fm % max);
    printf("%lld", gcddd(t1, t2));
    printf("%lld/%lld", t1,t2 );
  

    
}


