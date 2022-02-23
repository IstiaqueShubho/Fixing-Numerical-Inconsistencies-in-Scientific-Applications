#include<bits/stdc++.h>
#include<tgmath.h>
#include<time.h>
using namespace std;

double Round(double v, int digit)
{
    double Pow = powl(10.0, digit);
    double t = v * Pow;
    double r = floor(t + 0.5);
    return (double)(r / Pow);
}

int main()
{
    clock_t begin = clock();
    double x = Round(5.45, 1);
    double y = Round(5.55, 1);
    int t = clock();
    printf("%lf\n",(double)t / CLOCKS_PER_SEC);
    printf("%.1lf\n",x);
    printf("%.1lf\n",y);
    return 0;
}
