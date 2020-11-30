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

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
