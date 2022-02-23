#include<bits/stdc++.h>
#include <ctime>

using namespace std;

long double dot(long double* x, long double* y, int n) {
    long double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += x[i] * y[i];
    }
    return sum;
}

int main()
{
    double start_time = clock();
    long double x[8] = {1e9, 1e9 ,1e9 ,1e9,1e9,1e9,1e9,1e9};
    long double y[8] = {1e9, 1e9, 1e9, 1e9, 1e9, 1e9, 1e9, 1e9};
    long double ans = dot(x,y,8);
    printf("%Lf\n",ans);
    double end_time = clock();
	printf("Time = %lf\n", (end_time - start_time) / CLOCKS_PER_SEC);
    return 0;
}


