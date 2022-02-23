#include<bits/stdc++.h>
#include<tgmath.h>
#include<time.h>
using namespace std;

long double Round(long double v, int digit)
{
    long double Pow = powl(10.0, digit);
    long double t = v * Pow;
    long double r = floor(t + 0.5);
    return r / Pow;
}

int main()
{
    clock_t begin = clock();
    long double x = Round(1000000000000000.45, 1);
    long double y = Round(1000000000000000.55, 1);
    int t = clock();
    printf("%lf\n",(double)t / CLOCKS_PER_SEC);

    printf("%.1Lf\n",x);
    printf("%.1Lf\n",y);
    return 0;
}
